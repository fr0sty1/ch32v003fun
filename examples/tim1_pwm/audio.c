
#include "ch32v003fun.h"
#include "audio.h"
#include <math.h>
#include <stdio.h>
#include <stdbool.h>

// Audio system instance
AL_System audio_system;

#define PI 3.14159265
// redo quarter sintab to be signed 0 center
int8_t quartersintab[256]={
        0,0,1,2,3,3,4,5,6,7,7,8,9,10,10,11,
        12,13,14,14,15,16,17,18,18,19,20,21,21,22,23,24,
        24,25,26,27,28,28,29,30,31,31,32,33,34,34,35,36,
        37,37,38,39,40,40,41,42,43,43,44,45,46,46,47,48,
        48,49,50,51,51,52,53,54,54,55,56,56,57,58,58,59,
        60,61,61,62,63,63,64,65,65,66,67,67,68,69,69,70,
        71,71,72,73,73,74,74,75,76,76,77,78,78,79,79,80,
        81,81,82,83,83,84,84,85,85,86,87,87,88,88,89,89,
        90,91,91,92,92,93,93,94,94,95,95,96,96,97,97,98,
        98,99,99,100,100,101,101,102,102,103,103,104,104,105,105,105,
        106,106,107,107,108,108,108,109,109,110,110,110,111,111,112,112,
        112,113,113,113,114,114,115,115,115,116,116,116,117,117,117,117,
        118,118,118,119,119,119,119,120,120,120,121,121,121,121,122,122,
        122,122,122,123,123,123,123,123,124,124,124,124,124,125,125,125,
        125,125,125,125,126,126,126,126,126,126,126,126,127,127,127,127,
        127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127
};

// sine sampler
int8_t audio_waveformsine(uint16_t index)
{
    uint16_t tableindex=(index>>6)& 0xff;
    switch (index&0xc000)
    {
        case 0x0000:
            return quartersintab[tableindex];
        case 0x4000:
            return quartersintab[255-tableindex];
        case 0x8000:
            return -(quartersintab[tableindex]);
        default:
        case 0xc000:
            return -(quartersintab[255-tableindex]);
    }
}

AL_Waveform audio_waveform_sine={audio_waveformsine};

uint16_t audio_longenvelope_deltas[2]={0,0};
uint16_t audio_longenvelope_times[2]={0xffff,0};
AL_Envelope audio_longenvelope={2,0,audio_longenvelope_deltas,audio_longenvelope_times,1,10,0};

AL_Instrument audio_instrument_sine={ &audio_waveform_sine,&audio_longenvelope};

// multiply an 8 bit unsigned volume by an 8 bit signed sample 
// returning a signed modulated sample
int16_t audio_volume_sample_multiply(uint16_t u,int16_t s)
{
    uint16_t su = (s>=0) ? (uint16_t) s : -((uint16_t) s);
    uint16_t ret = 0;
	uint16_t multiplicand = su; //small_num;
	uint16_t mutliplicant = u;  //big_num;
	do
	{
		if( multiplicand & 1 )
			ret += mutliplicant;
		mutliplicant<<=1;
		multiplicand>>=1;
	} while( multiplicand );

	return ((s>=0) ? (int16_t) ret : -((int16_t) ret))>>8;
}

// multiply 8 bit unsigned volumes by one another, returning an 8 bit volume
uint16_t audio_volume_volume_multiply(uint16_t v1,uint16_t v2)
{
    uint16_t ret = 0;
	uint16_t multiplicand = v1; //small_num;
	uint16_t mutliplicant = v2;  //big_num;
	do
	{
		if( multiplicand & 1 )
			ret += mutliplicant;
		mutliplicant<<=1;
		multiplicand>>=1;
	} while( multiplicand );

	return ret>>8;
}

/*
void envelopeupdate(AL_Envelope *envelope)
{
    if (envelope->timer) 
    {
        envelope->volume+=envelope->delta;
        if (--envelope->timer==0) 
        {
            if (++envelope->phase < envelope->phases) 
            {
                envelope->delta=envelope->deltas[envelope->phase];
                envelope->timer=envelope->times[envelope->phase];
            }
            else
            {
                envelope->delta=0;
                envelope->timer=0;
            }
        }
    }
}
*/

// initialize audio library
void audio_initialize( void )
{
    audio_system.volume=255;
    audio_system.envelopedivider=AUDIO_SHAPE_DIVIDER; 
    for (uint16_t channel=0;channel<AUDIO_CHANNELS; ++channel)
    {
        AL_Channel *pchannel=&audio_system.channel[channel];
        pchannel->volume=255;

        for (uint16_t voice=0;voice<AUDIO_VOICES; ++voice)
        {
            AL_Voice *pvoice=&pchannel->voice[voice];
            pvoice->position=0;            
            pvoice->delta=0;            
            pvoice->pitchbend=0;            
            pvoice->volume=255;
            pvoice->value=0;
            pvoice->instrument=NULL;
        }
    }    
#ifdef AUDIO_DEBUG
    printf("Audio initialize\n");
    printf("Audio system has %d channels, each with %d voices\n",AUDIO_CHANNELS,AUDIO_VOICES);
    printf("Audio sample update frequency is %d Hz\n",AUDIO_UPDATE_FREQUENCY);
    printf("Audio shape update frequency is %d Hz\n",AUDIO_UPDATE_FREQUENCY/AUDIO_SHAPE_DIVIDER);
    printf("sizeof(audio_system)=%d\n",sizeof(audio_system));
#endif
}

// Audio update, call 44100 times a second
void audio_update( void )
{
    // update timers of all voice playback parameters
    for (uint16_t channel=0;channel<AUDIO_CHANNELS; ++channel)
    {
        AL_Channel *pchannel=&audio_system.channel[channel];
        // calculate combined master and channel volume
        //uint32_t channelvolume=(audio_system.volume*pchannel->volume)>>8;
        pchannel->value=0;
        for (uint16_t voice=0;voice<AUDIO_VOICES; ++voice)
        {
            AL_Voice *pvoice=&pchannel->voice[voice];
            if (pvoice->playing)
            {
                if (pvoice->instrument!=NULL)
                {
                    // there is an instrument, process
                    //uint32_t voicevolume=(channelvolume*pvoice->volume)>>8;                
                    pvoice->position+=pvoice->delta;
                    int16_t sample = (int16_t) pvoice->instrument->waveform->sample(pvoice->position+pvoice->pitchbend);
                    //pvoice->value=char ((sample*voicevolume)>>8);
                    //pvoice->value= ((sample*voicevolume)>>8);
                    pvoice->value= sample;
                }
                else
                {
                    // no instrument
                    // drift value to center 
                    if (pvoice->value!=0)
                    {
                        if (pvoice->value > 0)
                        {
                            --pvoice->value;
                        }
                        else
                        {
                            ++pvoice->value;
                        }  
                    }
                    else
                    {
                        pvoice->playing=false;
                    }
                }
                pchannel->value+=pvoice->value;
            }
        }
        pchannel->value>>=AUDIO_VOICES_POW2;
    }

     // update audio shape
    if (--audio_system.envelopedivider==0)
    {
        audio_system.envelopedivider=AUDIO_SHAPE_DIVIDER;    // 10ms
        // envelope update
    }
}

// Get the value of an output pin
unsigned char audio_getchannelvalue(uint16_t channel)
{   
    int16_t value = audio_system.channel[channel].value+128;
    // clamp
    //if (value<0) value=0;
    //if (value>255) value=255;
    return (unsigned char) value;
}

// Key a note on a voice on
void audio_keyon(   uint16_t channel,
                    uint16_t voice,
                    uint16_t frequency,
                    uint16_t velocity )
{
    AL_Voice *pvoice = &audio_system.channel[channel].voice[voice];
    // samplerstepspersecond=samplerstepspercycle*cyclespersecond
    uint32_t samplerstepspersecond= ((uint32_t) frequency)<<16;
    // stepsperupdate=stepspersecond/updatespersecond
    pvoice->delta=samplerstepspersecond/((uint32_t)AUDIO_UPDATE_FREQUENCY);
    pvoice->volume=velocity;
    pvoice->position=0;
    pvoice->playing=true;
}

// Key a note on a voice off (trigger sound decay)
void audio_keyoff(   uint16_t channel,
                    uint16_t voice)
{
    printf("audio_keyoff unimplemented\n");    
}

// Stop and silence a voice
void audio_stopvoice(uint16_t channel,
                    uint16_t voice)
{
    printf("audio_stopvoice unimplemented\n");
}

// shutdown audio library and release resources
void audio_release( void )
{
#ifdef AUDIO_DEBUG
    printf("Audio release\n");
    // Nothing to do since audio library is statically allocated 
    // and update will no longer be called
#endif
}
