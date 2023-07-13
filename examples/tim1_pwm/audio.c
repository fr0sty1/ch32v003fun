
#include "ch32v003fun.h"
#include "audio.h"
#include <math.h>
#include <stdio.h>

#define PI 3.14159265

char sintab[SINTABLEN];

void initsintab(void)
{
    printf("initsintab");
    double step=(PI/(4*SINTABLEN));
    double a=0.0;
    for ( uint16_t i=0 ; i!=SINTABLEN ; ++i ) {
        //sintab[i]=(char) (127.0*sin(a));
        //printf("%d %d\n",i,sintab[i]);
        a+=step;
    }
}

char getsin(uint16_t a)
{
    uint16_t ai=(a>>6)& 0xff;
    switch (a&0xc000)
    {
        case 0x0000:
            return sintab[ai];
        case 0x4000:
            return sintab[255-ai];
        case 0x8000:
            return -sintab[ai];
        default:
        case 0xc000:
            return -sintab[255-ai];
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
#if 0



#endif