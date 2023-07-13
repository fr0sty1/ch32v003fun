/*
    Audio library
    by D. Scott Williamson 2023

    Mix                         All channels
        Channel[]               A polyphonic output channel
            Voice[]             A voice on a channel
                Instrument      An instrument to be played on a voice
                    Waveform    A waveform player
                    Envelope    A envelope shaper
                    Tremelo     Tremelo (cyclic volume modulation)
                    Vibrato     Vibrato (cyclic frequency modulation)
*/

#ifndef AUDIO_LIBRARY
#define AUDIO_LIBRARY

#define AUDIO_CHANNELS 1
#define AUDIO_VOICES 4

#define SINTABLEN 256


// Audio library structures

typedef struct 
{
    uint16_t length;
    char *table;
    char (*read)(uint16_t position);
} AL_Waveform; 

typedef struct  
{
    uint16_t phases;    // number of envelope phases (eg ADSR = 4)
    uint16_t phase;     // current phase

    uint16_t *deltas;   // list of deltas for volume
    uint16_t *times;    // list of times for deltas

    uint16_t delta;     // current delta
    uint16_t timer;     // current coundown timer

    uint16_t volume;    // current volume of the envelope
} AL_Envelope;

typedef struct 
{
    AL_Waveform *waveform;
    AL_Envelope *envelope;
    // todo vibrato
    // todo tremelo
} AL_Instrument;

typedef struct AL_Voice
{
    uint16_t position;  // position in wave table fixed point 0 to 1
    uint16_t delta;     // derived from frequency and length of wave table
    // todo pitch bend

    uint16_t volume;    // 8 bit volume 
    uint16_t value;     // value
 
    AL_Instrument *instrument;

    uint16_t (*update)(struct AL_Voice *this);
    void (*setfrequency)(struct AL_Voice *this,uint16_t frequency);
} AL_Voice;

typedef struct 
{
    AL_Voice *voices;
    uint16_t numvoices;
    uint16_t mastervolume;
} AL_Mix;

char getsin(uint16_t a);

//AL_Instrument al_defaultinstruments[]={{}}

// functions

//AL_Instrument defaultinstruments[]={{}}

// initialize audio library
void audio_initialize( void );

void audio_update( int32_t systime );

// shutdown audio library and release resources
void audio_release( void );

#endif //#ifndef AUDIO_LIBRARY