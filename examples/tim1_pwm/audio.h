/*
    Audio library
    by D. Scott Williamson 2023

    Audio library is a mu

    System                         All channels
        Channel[]               A polyphonic output channel
            Voice[]             A voice on a channel
                Instrument      An instrument to be played on a voice
                    Waveform    A waveform player
                    Envelope    A envelope shaper
                    Tremelo     Tremelo (cyclic volume modulation)
                    Vibrato     Vibrato (cyclic frequency modulation)

    Definition of done
        [] Play 4 voice tocata and fugue
            [] Audio system
            [] Music playback system

    todo 
        [] envelope processing
        [] Only update volumes when volume updated in update (update flag)
        [] lookup fast multiply
            [] look at disassembly of small program 
            https://github.com/cnlohr/ch32v003fun/blob/master/examples/ws2812bdemo/color_utilities.h
            FastMultiply
        [] 4 input pins for 4 voices
        [] input pins key on/key off for envelope testing
        [] IRQ for audio processing
        [] Pivot to single voice for frosty



        [x] Audio library structures and API can play a sound
        [x] Audio update calculates everything
        [x] Play 440 hz sine wave
        [] special case volumes 255 and 0 (#define)
        [-] clip waveform (#define)
        [] Debug #define

*/

#ifndef AUDIO_LIBRARY
#define AUDIO_LIBRARY

#define AUDIO_CHANNELS (1)
#define AUDIO_VOICES_POW2 (2)
#define AUDIO_VOICES (1<<AUDIO_VOICES_POW2)

#define AUDIO_UPDATE_FREQUENCY (44100)
// 44100 Hz /441 = 100 Hz or update every 10MS
#define AUDIO_SHAPE_DIVIDER (441)

// Uncomment the following line for debugging
//#define AUDIO_DEBUG

///////////////////////////////////////////////////////////////////////////////
// Audio library structures

// AL_Waveform
// A waveform returns a value for a 16 bit position 
// representing a single cycle
typedef struct 
{
    int8_t (*sample)(uint16_t index);
} AL_Waveform; 

// AL_Envelope
// A sequence of volume ramps to shape a waveform 
typedef struct  
{
    // todo key down, sustain, key up
    uint16_t phases;    // number of envelope phases (eg ADSR = 4)
    uint16_t phase;     // current phase

    uint16_t *deltas;   // list of deltas for volume
    uint16_t *times;    // list of times for deltas

    uint16_t delta;     // current delta
    uint16_t timer;     // current coundown timer

    uint16_t volume;    // current volume of the envelope
} AL_Envelope;

// AL_Instrument
// The components that describe an instrument
typedef struct 
{
    AL_Waveform *waveform;
    AL_Envelope *envelope;  // todo: envelope description and state need to be separate
    // todo vibrato
    // todo tremelo
} AL_Instrument;

// AL_Voice
// A voice plays a single instrument
typedef struct AL_Voice
{
    uint16_t position;  // position in wave table fixed point 0 to 1
    uint16_t delta;     // derived from frequency and length of wave table
    uint16_t pitchbend; // pitch bend (delta on delta)

    uint16_t volume;    // 8 bit volume 
    int16_t value;      // value

    uint8_t playing;      // todo all voices play all the time now
//    uint8_t priority;   // to be used for dynamic voice allocation
 
    AL_Instrument *instrument;

//    uint16_t (*update)(struct AL_Voice *this);
//    void (*setfrequency)(struct AL_Voice *this,uint16_t frequency);
} AL_Voice;

// AL Channel
// A channel is a polyphonic physical output (a single PWM pin)
typedef struct 
{
    AL_Voice voice[AUDIO_VOICES];   // voices in the channel
    uint16_t volume;                // channel volume
    int16_t  value;                 // value of all voices in the channel

} AL_Channel;

// AL_System is the entire audio system
typedef struct 
{
    AL_Channel channel[AUDIO_CHANNELS]; // polyphonic sound channels
    uint16_t volume;                    // master volume
    uint16_t envelopedivider;           // for lower frequency shaping processing
} AL_System;

extern AL_System audio_system;

///////////////////////////////////////////////////////////////////////////////
// Audio library API

// Auido system initialization 
void audio_initialize( void );

// Audio system update to be called at 44.1 kHz
void audio_update( void );

// Return channel value to be sent to PWM
unsigned char audio_getchannelvalue(uint16_t channel);

// Set audio system master volume
inline void audio_setmastervolume(uint16_t volume ) 
    {audio_system.volume=volume;}

// Set audio system channel volume
inline void audio_setchannelvolume(uint16_t channel,
                            uint16_t volume )
    {audio_system.channel[channel].volume=volume;}

// Set audio system voice volume
inline void audio_setvoicevolume(uint16_t channel,
                          uint16_t voice,
                          uint16_t volume )
   {audio_system.channel[channel].voice[voice].volume=volume;}

// Set audio system voice volume
inline void audio_setvoicepitchbend(uint16_t channel,
                          uint16_t voice,
                          uint16_t pitchbend )
    {audio_system.channel[channel].voice[voice].pitchbend=pitchbend;}

// Set a voice's instrument parameters
inline void audio_setinstrument(   uint16_t channel,
                            uint16_t voice,
                            AL_Instrument *instrument)
    {audio_system.channel[channel].voice[voice].instrument=instrument;}

// Key a note on a voice on
void audio_keyon(   uint16_t channel,
                    uint16_t voice,
                    uint16_t frequency,
                    uint16_t velocity );

// Key a note on a voice off (trigger sound decay)
void audio_keyoff(   uint16_t channel,
                    uint16_t voice);

// Stop and silence a voice
void audio_stopvoice(uint16_t channel,
                    uint16_t voice);
         
// shutdown audio library and release resources
void audio_release( void );

#endif //#ifndef AUDIO_LIBRARY