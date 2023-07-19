
#include "ch32v003fun.h"
#include "audio.h"
#include <stdio.h>
#include <stdbool.h>

// Audio system instance
AL_System audio_system;

// sawtooth sampler
int8_t audio_sawtooth_sampler(uint16_t index)
{
    return (int8_t) (index>>8);
}

// square wave sampler
int8_t audio_square_sampler(uint16_t index)
{
    return (int8_t) ((index& 0x8000)?-127:127);
}

// triangle sampler
int8_t audio_triangle_sampler(uint16_t index)
{
    if (index&0x8000)
    {
        return -((int8_t) (((index>>7)&0xff)))-129;
    }
    else
    {
        return (int8_t) (((index>>7)&0xff))+128;
    }
} 

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
int8_t audio_sine_sampler(uint16_t index)
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

AL_Waveform audio_waveform_sine={audio_sine_sampler};
AL_Waveform audio_waveform_sawtooth={audio_sawtooth_sampler};
AL_Waveform audio_waveform_square={audio_square_sampler};
AL_Waveform audio_waveform_triangle={audio_triangle_sampler};

// min 10ms
#define ADSR_RAMP_MS(ms) (256/((ms)/10))
#define ADSR_VOLUME(pct) (255*(pct)/100)

// attack delta, decay delta, sustain value, release delta, vibrato amplitude, vibrato delta
AL_ADSR audio_adsr_on={256,0,255,-255,0,0};
AL_ADSR audio_adsr_piano={ADSR_RAMP_MS(10),ADSR_RAMP_MS(100),255*.66,ADSR_RAMP_MS(900),0,0};  

AL_Instrument audio_instrument_sine={ &audio_waveform_sine,&audio_adsr_piano};
AL_Instrument audio_instrument_triangle={ &audio_waveform_triangle,&audio_adsr_piano};
AL_Instrument audio_instrument_square={ &audio_waveform_square,&audio_adsr_piano};
AL_Instrument audio_instrument_sawtooth={ &audio_waveform_sawtooth,&audio_adsr_piano};

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
        if ( audio_system.flags&AL_SYSTEM_FLAG_UPDATE_VOLUME)
        {         
            //pchannel->compositevolume=audio_volume_volume_multiply(audio_system.volume,pchannel->volume);
            audio_system.flags&=~AL_SYSTEM_FLAG_UPDATE_VOLUME;
            printf("setting volumes\n");
        }

        pchannel->value=0;
        for (uint16_t voice=0;voice<AUDIO_VOICES; ++voice)
        {
            AL_Voice *pvoice=&pchannel->voice[voice];
            if (pvoice->playing)
            {
                if (pvoice->instrument!=NULL)
                {
                    // there is an instrument, process
                    //uint16_t compositevolume=audio_volume_sample_multiply(pchannel->compositevolume,pvoice->volume);              
                    pvoice->position+=pvoice->delta;
                    int16_t sample = (int16_t) pvoice->instrument->waveform->sample(pvoice->position+pvoice->pitchbend);
                    //pvoice->value=audio_volume_sample_multiply(compositevolume, sample);
                    pvoice->value=audio_volume_sample_multiply(pvoice->volume, sample);
                    //pvoice->value=((int16_t) pvoice->volume * sample)>>8;
                    //printf("%d %d\n",voice,pvoice->volume);
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
        //pchannel->value>>=AUDIO_VOICES_POW2;
    }

     // update audio shape
    // todo could process updates in phases 
        // one to composite volumes
        // one for each voice of each channel
        // one to commit values
    if (--audio_system.envelopedivider==0)
    {
        audio_system.envelopedivider=AUDIO_SHAPE_DIVIDER;    // 10ms
        // envelope update
        for (uint16_t channel=0;channel<AUDIO_CHANNELS; ++channel)
        {
            AL_Channel *pchannel=&audio_system.channel[channel];
            for (uint16_t voice=0;voice<AUDIO_VOICES; ++voice)
            {
                AL_Voice *pvoice=&pchannel->voice[voice];
                AL_ADSR *padsr=pvoice->instrument->adsr;
                switch (pvoice->adsr_phase)
                {
                    case 'a':

                        pvoice->adsr_volume+=padsr->attack_delta;
                        if (pvoice->adsr_volume>=255)
                        {
                            pvoice->adsr_phase='d';
                            pvoice->adsr_volume=255;
                        }
                        //printf("attack %d\n",pvoice->adsr_volume);
                        break;
                    case 'd':
                        pvoice->adsr_volume-=padsr->decay_delta;
                        if ((pvoice->adsr_volume <= padsr->sustain_value) || (pvoice->adsr_volume & 0x8000))
                        {
                            pvoice->adsr_phase='s';
                            pvoice->adsr_volume=padsr->sustain_value;
                        }
                        //printf("decay %d\n",pvoice->adsr_volume);
                        break;
                    case 's':
                        // sustain does nothing but waits for a key release
                        //printf("sustain %d\n",pvoice->adsr_volume);
                        break;
                    case 'r':
                        pvoice->adsr_volume-=padsr->release_delta;
                        if (pvoice->adsr_volume & 0x8000)
                        {
                            pvoice->adsr_phase="x";
                            pvoice->adsr_volume=0;
                            pvoice->playing=false;
                        }
                        //printf("release %d\n",pvoice->adsr_volume);
                        break;   
                    default:
                        // ADSR not started
                        //printf("none %d\n",pvoice->adsr_volume);
                        break;                     
                }
                pvoice->volume=pvoice->adsr_volume;
                //printf("adsr: %c %d\n",pvoice->adsr_phase,pvoice->adsr_volume);
            }
        }
    }
}

// Get the value of an output pin
unsigned char audio_getchannelvalue(uint16_t channel)
{   
    int16_t value = audio_system.channel[channel].value+128;
    // clamp
    if (value<0) value=0;
    if (value>255) value=255;
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
    //pvoice->volume=velocity;
    pvoice->position=0;
    pvoice->playing=true;
    pvoice->adsr_phase='a';
    pvoice->adsr_volume=0;
}

// Key a note on a voice off (trigger sound decay)
void audio_keyoff(   uint16_t channel,
                    uint16_t voice)
{
    AL_Voice *pvoice = &audio_system.channel[channel].voice[voice];
    if (pvoice->playing)
    {
        pvoice->adsr_phase='r';
    }
}

// Stop and silence a voice
void audio_stopvoice(uint16_t channel,
                    uint16_t voice)
{
    // Stopping a voice immediately stops playing a sound
    // an audible click is likely
    audio_system.channel[channel].voice[voice].playing=false;
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
