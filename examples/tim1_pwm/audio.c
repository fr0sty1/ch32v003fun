
#include "ch32v003fun.h"
#include "audio.h"
#include <math.h>
#include <stdio.h>

#define PI 3.14159265
unsigned char quartersintab[256]={
        128,128,129,130,131,131,132,133,134,135,135,136,137,138,138,139,
        140,141,142,142,143,144,145,146,146,147,148,149,149,150,151,152,
        152,153,154,155,156,156,157,158,159,159,160,161,162,162,163,164,
        165,165,166,167,168,168,169,170,171,171,172,173,174,174,175,176,
        176,177,178,179,179,180,181,182,182,183,184,184,185,186,186,187,
        188,189,189,190,191,191,192,193,193,194,195,195,196,197,197,198,
        199,199,200,201,201,202,202,203,204,204,205,206,206,207,207,208,
        209,209,210,211,211,212,212,213,213,214,215,215,216,216,217,217,
        218,219,219,220,220,221,221,222,222,223,223,224,224,225,225,226,
        226,227,227,228,228,229,229,230,230,231,231,232,232,233,233,233,
        234,234,235,235,236,236,236,237,237,238,238,238,239,239,240,240,
        240,241,241,241,242,242,243,243,243,244,244,244,245,245,245,245,
        246,246,246,247,247,247,247,248,248,248,249,249,249,249,250,250,
        250,250,250,251,251,251,251,251,252,252,252,252,252,253,253,253,
        253,253,253,253,254,254,254,254,254,254,254,254,255,255,255,255,
        255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
};

unsigned char getqsin(uint16_t a)
{
    uint16_t ai=(a>>6)& 0xff;
    switch (a&0xc000)
    {
        case 0x0000:
            return quartersintab[ai];
        case 0x4000:
            return quartersintab[255-ai];
        case 0x8000:
            return 255-quartersintab[ai];
        default:
        case 0xc000:
            return 255-quartersintab[255-ai];
    }
}

uint16_t deltas[2]={1,2};
uint16_t times[2]={5,10};
AL_Envelope envelope={2,0,deltas,times,1,10,0};

void envelopeupdate(AL_Envelope *this)
{
    if (this->timer) 
    {
        this->volume+=this->delta;
        if (--this->timer==0) 
        {
            if (++this->phase < this->phases) 
            {
                this->delta=this->deltas[this->phase];
                this->timer=this->times[this->phase];
            }
            else
            {
                this->delta=0;
                this->timer=0;
            }
        }
    }
}

uint16_t update(AL_Voice *v)
{
    //v->value=getvalue((v->position+=v->delta)*v->volume)>>8;
    return 0;
}

/*
void updatemix(AL_Mix *this)
{
    uint32_t mixvalue=0;
    for (uint16_t i=0; i!=(AUDIO_VOICES); ++i)
    {
        mixvalue+=this->voices[i].update(&this->voices[i]);
    }
    mixvalue*=this->mastervolume;
    mixvalue>>=8;
}
*/

static unsigned char value;

// initialize audio library
void audio_initialize( void )
{
    printf("Audio initialize\n");
    value=0;
}

// Audio update, call 44100 times a second
void audio_update( void )
{
    // update master
    //master->update();

    static uint16_t envelopedivider;
    if (--envelopedivider==0)
    {
        envelopedivider=441;    // 10ms
        // envelope update
    }

    //value^=0xff;
    value+=1;
    return value;

    //return getqsin(systime);
}

// Get the value of an output pin
unsigned char audio_getchannelvalue(uint16_t channel)
{   
    // todo
    // todo should it be calculated in update or in here?
    return 0;
}

// shutdown audio library and release resources
void audio_release( void )
{
        printf("Audio release\n");
}


#if 0





#endif