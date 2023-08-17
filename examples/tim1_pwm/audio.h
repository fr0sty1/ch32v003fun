/*
    Audio library
    by D. Scott Williamson 2023

    System                      All channels
        Channel[]               A polyphonic output channel
            Voice[]             A voice on a channel
                Instrument      An instrument to be played on a voice
                    Sampler     A waveform player
                    ADSR        A envelope shaper
                    Tremelo     Tremelo (cyclic volume modulation)
                    Vibrato     Vibrato (cyclic frequency modulation)

*/

#ifndef AUDIO_LIBRARY
#define AUDIO_LIBRARY

#define AUDIO_CHANNELS (1)

#if 0
// 4 voice presets
#   #define AUDIO_UPDATE_FREQUENCY (22000)
#   define AUDIO_VOICES_POW2 (2)
#   define AUDIO_VOICES (1<<AUDIO_VOICES_POW2)
#   define AUDIO_FIFO_SIZE_POW2 (7)
#   define AUDIO_FIFO_SIZE (1<<AUDIO_FIFO_SIZE_POW2)
#else
// 8 voice presets
#   define AUDIO_UPDATE_FREQUENCY (16000)
#   define AUDIO_VOICES_POW2 (3)
#   define AUDIO_VOICES (1<<AUDIO_VOICES_POW2)
#   define AUDIO_FIFO_SIZE_POW2 (10)
#   define AUDIO_FIFO_SIZE (1<<AUDIO_FIFO_SIZE_POW2)
#endif

#define AUDIO_TIMER_PRESCALER (FUNCONF_SYSTEM_CORE_CLOCK/(256*(AUDIO_UPDATE_FREQUENCY)))
#define AUDIO_TIMER_RELOAD (FUNCONF_SYSTEM_CORE_CLOCK/((AUDIO_TIMER_PRESCALER)*(AUDIO_UPDATE_FREQUENCY)))
#define AUDIO_ACTUAL_UPDATE_FREQUENCY (FUNCONF_SYSTEM_CORE_CLOCK/(AUDIO_TIMER_PRESCALER*AUDIO_TIMER_RELOAD))

// Audio shape update divider (100 Hz or update every 10MS)
#define AUDIO_SHAPE_DIVIDER (AUDIO_UPDATE_FREQUENCY/100)

// Uncomment the following line for debugging
#define AUDIO_DEBUG

///////////////////////////////////////////////////////////////////////////////
// Audio library structures

// AL_ADSR
// ADSR envelope
typedef struct
{
    uint16_t attack_delta;  // ramp from 0 to max
    uint16_t attack_peak;   // attack peak value
    uint16_t decay_delta;   // ramp from max to sustain value
    uint16_t sustain_value; // sustain value
    uint16_t release_delta; // ramp from sustain to 0
} AL_ADSR;

// AL_Instrument
// The components that describe an instrument
typedef struct 
{
    int8_t (*sample)(uint16_t index);   // waveform sampler
    AL_ADSR   *adsr;                // ADSR envelope
    uint16_t  vibrato_amplitude;    // vibrato amplitude (4 bits fraction)
    int16_t   vibrato_delta;        // vibrato delta (4 bits fraction)
    uint16_t  tremolo_amplitude;    // vibrato amplitude (4 bits fraction)
    int16_t   tremolo_delta;         // vibrato delta (4 bits fraction)
} AL_Instrument;

// AL_Voice
// A voice plays a single instrument
typedef struct AL_Voice
{
    // todo, reorder members

    uint16_t position;  // position in wave table fixed point 0 to 1
    uint16_t delta;     // derived from frequency and length of wave table
    uint16_t pitchbend; // pitch bend (delta on delta)

    uint16_t volume;    // 8 bit volume 
    uint16_t compositevolume;  // voice volume * channel volume * master volume
    uint16_t sample_volume; // the volume applied to samples
    int16_t output_value;      // value

    uint8_t playing;      // todo all voices play all the time now
//    uint8_t priority;   // to be used for dynamic voice allocation
 
    uint8_t adsr_phase;     // current phase
    int16_t adsr_volume;    // current volume of the envelope
    AL_ADSR adsr_composite;    // ADSR settings scaled by composite volume 

    int16_t vibrato;
    int16_t vibrato_delta;

    int16_t tremolo;
    int16_t tremolo_delta;
    int16_t tremolo_amplitude;

    AL_Instrument *instrument;
    uint8_t flags;
} AL_Voice;

// AL Channel
// A channel is a polyphonic physical output (a single PWM pin)
typedef struct 
{
    AL_Voice voice[AUDIO_VOICES];   // voices in the channel
    uint16_t volume;                // channel set volume
    uint16_t compositevolume;       // channel volume * master volume
    int16_t  output_value;                 // value of all voices in the channel
    uint8_t flags;
} AL_Channel;

// AL_FIFO
// Audio Library FIFO
typedef struct 
{
    volatile uint8_t audio_fifo[AUDIO_FIFO_SIZE];
    uint16_t  index_head;
    uint16_t  index_tail;
    uint16_t  free;
} AL_FIFO;


// AL_System is the entire audio system
typedef struct 
{
    AL_Channel channel[AUDIO_CHANNELS]; // polyphonic sound channels
    uint16_t volume;                    // master volume
    uint16_t envelopedivider;           // for lower frequency shaping processing
    uint8_t flags;
    AL_FIFO fifo;                       // fifo    
#define AL_SYSTEM_FLAG_UPDATE_VOLUME (1<<0)
#define AL_SYSTEM_FLAG_UPDATE_COMPOSITE_VOLUME (1<<1)
} AL_System;



extern AL_System audio_system;

///////////////////////////////////////////////////////////////////////////////
// Audio library API

// Auido system initialization 
void audio_initialize( void );

// Audio system update (update channel values for fifo)
void audio_update( void );

// Return channel value to be sent to PWM
unsigned char audio_get_channel_value(uint16_t channel);

// Set audio system master volume
void audio_set_master_volume(uint16_t volume );


// Set audio system channel volume
void audio_set_channel_volume(uint16_t channel,
                            uint16_t volume );

// Set audio system voice volume
void audio_set_voice_volume(uint16_t channel,
                          uint16_t voice,
                          uint16_t volume );

// Set audio system voice volume
inline void audio_set_voice_pitchbend(uint16_t channel,
                          uint16_t voice,
                          uint16_t pitchbend )
{
    audio_system.channel[channel].voice[voice].pitchbend=pitchbend;
}

// Set a voice's instrument parameters
inline void audio_set_instrument(   uint16_t channel,
                            uint16_t voice,
                            AL_Instrument *instrument)
{
    audio_system.channel[channel].voice[voice].instrument=instrument;
}

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

// Audio Library FIFO functions

// Initialize FIFO
void fifo_initialize(AL_FIFO* fifo);

// Read an element from the FIFO
uint8_t fifo_read(AL_FIFO* fifo);

// Write an element to the FIFO, return true if successful
uint8_t fifo_write(AL_FIFO* fifo,uint8_t data);

// Return the amount of data free in the FIFO
uint16_t fifo_free(AL_FIFO* fifo);

// Return the amount of used in the FIFO
uint16_t fifo_used(AL_FIFO* fifo);

#endif //#ifndef AUDIO_LIBRARY