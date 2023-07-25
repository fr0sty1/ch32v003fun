/*
    Audio library
    by D. Scott Williamson 2023

    System                      All channels
        Channel[]               A polyphonic output channel
            Voice[]             A voice on a channel
                Instrument      An instrument to be played on a voice
                    Waveform    A waveform player
                    Envelope    A envelope shaper
                    Tremelo     Tremelo (cyclic volume modulation)
                    Vibrato     Vibrato (cyclic frequency modulation)
    todo 
        [] vibrato
        [] Tremelo
        [] Instrument set (piano, organ, violin, drums)
        [] IRQ for audio processing
        [] update volumes in update one per service
        [] Pivot to single voice for frosty

*/

#ifndef AUDIO_LIBRARY
#define AUDIO_LIBRARY

#define AUDIO_CHANNELS (1)
#define AUDIO_VOICES_POW2 (2)
#define AUDIO_VOICES (1<<AUDIO_VOICES_POW2)
#define AUDIO_FIFO_SIZE_POW2 (6)
#define AUDIO_FIFO_SIZE (1<<AUDIO_FIFO_SIZE_POW2)

#define AUDIO_UPDATE_FREQUENCY (44100)
// 44100 Hz /441 = 100 Hz or update every 10MS
#define AUDIO_SHAPE_DIVIDER (441)

// Uncomment the following line for debugging
#define AUDIO_DEBUG

///////////////////////////////////////////////////////////////////////////////
// Audio library structures

// AL_ADSR
// ADSR envelope
typedef struct
{
    uint16_t attack_delta;  // ramp from 0 to max
    uint16_t decay_delta;   // ramp from max to sustain value
    uint16_t sustain_value; // sustain value
    uint16_t release_delta; // ramp from sustain to 0
} AL_ADSR;

// AL_Instrument
// The components that describe an instrument
typedef struct 
{
    int8_t (*sample)(uint16_t index);   // waveform sampler
    AL_ADSR     *adsr;      // ADSR envelope
    uint16_t  vibrato_amplitude; // vibrato amplitude 
    uint16_t  vibrato_delta; // vibrato delta
    uint16_t  tremolo_amplitude; // vibrato amplitude 
    uint16_t  tremolo_delta; // vibrato delta
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
 
    uint8_t adsr_phase;     // current phase
    int16_t adsr_volume;    // current volume of the envelope

    int16_t vibrato;
    int16_t vibrato_delta;
    int16_t tremolo;
    int16_t tremolo_delta;

    AL_Instrument *instrument;
} AL_Voice;

// AL Channel
// A channel is a polyphonic physical output (a single PWM pin)
typedef struct 
{
    AL_Voice voice[AUDIO_VOICES];   // voices in the channel
    uint16_t volume;                // channel set volume
    uint16_t compositevolume;       // channel volume * master volume
    int16_t  value;                 // value of all voices in the channel
} AL_Channel;

// AL_System is the entire audio system
typedef struct 
{
    AL_Channel channel[AUDIO_CHANNELS]; // polyphonic sound channels
    uint16_t volume;                    // master volume
    uint16_t envelopedivider;           // for lower frequency shaping processing
    uint8_t flags;
#define AL_SYSTEM_FLAG_UPDATE_VOLUME (1<<0)
} AL_System;

// AL_FIFO
// Audio Library FIFO
typedef struct 
{
    volatile int8_t audio_fifo[AUDIO_FIFO_SIZE];
    uint16_t  index_head;
    uint16_t  index_tail;
    uint16_t  free;
} AL_FIFO;
// Audio Library FIFO functions
void fifo_init(AL_FIFO* fifo);
int8_t fifo_read(AL_FIFO* fifo);
int8_t fifo_write(AL_FIFO* fifo,int8_t data);
uint16_t fifo_free(AL_FIFO* fifo);
uint16_t fifo_used(AL_FIFO* fifo);

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
{
    audio_system.volume=volume;
    audio_system.flags|=AL_SYSTEM_FLAG_UPDATE_VOLUME;
}

// Set audio system channel volume
inline void audio_setchannelvolume(uint16_t channel,
                            uint16_t volume )
{
    audio_system.channel[channel].volume=volume;
    audio_system.flags|=AL_SYSTEM_FLAG_UPDATE_VOLUME;
}

// Set audio system voice volume
inline void audio_setvoicevolume(uint16_t channel,
                          uint16_t voice,
                          uint16_t volume )
{
    audio_system.channel[channel].voice[voice].volume=volume;
}

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
         
// Shutdown audio library and release resources
void audio_release( void );

#endif //#ifndef AUDIO_LIBRARY