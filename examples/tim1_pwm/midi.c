/*
    Mini midi player for the CH32V003 audio library
    by D. Scott Williamson 2023
*/

#include "ch32v003fun.h"
#include "audio.h"
#include "midi.h"
#include <stdio.h>
#include <stdbool.h>

// Song to play
// 1 Toccata and Fugue in Dm
// 2 Fur Elise
// 3 Brandenburg Concerto #3
// 4 Korobeiniki (Tetris theme)
// 5 In the hall of the Mountain King
// 6 Super Mario Bros Theme
// 7 Sweet Child of Mine
// 8 Brandenburg-Concerto-Nr-5-Bwv-1047
// 9 Tubular Bells (The Exorcist Theme)
#define MIDI_SONG 7

#if MIDI_SONG==1
#   if AUDIO_VOICES==4
#   include "Toccata-and-Fugue-Dm.mid4.c"
#   elif AUDIO_VOICES==8
#   include "Toccata-and-Fugue-Dm.mid8.c"
#   endif
extern AL_Instrument audio_instrument_synth;
AL_Instrument *pinstrument= &audio_instrument_synth;

#elif MIDI_SONG==2
#   if AUDIO_VOICES==4
#   include "Fur_Elise.mid4.c"
#   elif AUDIO_VOICES==8
#   include "Fur_Elise.mid8.c"
#   endif
extern AL_Instrument audio_instrument_piano;
AL_Instrument *pinstrument= &audio_instrument_piano;

#elif MIDI_SONG==3
#   if AUDIO_VOICES==4
#   include "brand3.mid4.c"
#   elif AUDIO_VOICES==8
#   include "brand3.mid8.c"
#   endif
extern AL_Instrument audio_instrument_synth;
AL_Instrument *pinstrument= &audio_instrument_synth;

#elif MIDI_SONG==4
#   if AUDIO_VOICES==4
#   include "korobeiniki.mid4.c"
#   elif AUDIO_VOICES==8
#   include "korobeiniki.mid8.c"
#   endif
extern AL_Instrument audio_instrument_8bit;
AL_Instrument *pinstrument= &audio_instrument_8bit;

#elif MIDI_SONG==5
#   if AUDIO_VOICES==4
#   include "In_the_hall_of_the_Mountain_King.mid4.c"
#   elif AUDIO_VOICES==8
#   include "In_the_hall_of_the_Mountain_King.mid8.c"
#   endif
extern AL_Instrument audio_instrument_synth;
AL_Instrument *pinstrument= &audio_instrument_synth;

#elif MIDI_SONG==6
#   if AUDIO_VOICES==4
#   include "Super_Mario_Bros_Theme.mid4.c"
#   elif AUDIO_VOICES==8
#   include "Super_Mario_Bros_Theme.mid8.c"
#   endif
extern AL_Instrument audio_instrument_violin;
AL_Instrument *pinstrument= &audio_instrument_violin;

#elif MIDI_SONG==7
#   if AUDIO_VOICES==4
#   include "sweetchildofmine.mid4.c"
#   elif AUDIO_VOICES==8
#   include "sweetchildofmine.mid8.c"
#   endif
extern AL_Instrument audio_instrument_violin;
AL_Instrument *pinstrument= &audio_instrument_violin;

#elif MIDI_SONG==8
#   if AUDIO_VOICES==4
#   include "Brandenburg-Concerto-Nr-5-Bwv-1047.mid4.c"
#   elif AUDIO_VOICES==8
#   include "Brandenburg-Concerto-Nr-5-Bwv-1047.mid8.c"
#   endif
extern AL_Instrument audio_instrument_8bit;
AL_Instrument *pinstrument= &audio_instrument_8bit;

#elif MIDI_SONG==9
#   if AUDIO_VOICES==4
#   include "tubbell1.mid4.c"
#   elif AUDIO_VOICES==8
#   include "tubbell1.mid8.c"
#   endif
extern AL_Instrument audio_instrument_vibraphone;
AL_Instrument *pinstrument= &audio_instrument_vibraphone;

// not good
// #elif MIDI_SONG==9
// #include "blister.mid8.c"
// extern AL_Instrument audio_instrument_piano;
// AL_Instrument *pinstrument= &audio_instrument_piano;

// #elif MIDI_SONG==10
// #include "godzilla-30.mid8.c"
// extern AL_Instrument audio_instrument_synth;
// AL_Instrument *pinstrument= &audio_instrument_synth;

// not good
//#include "Hall_and_Oates_-_I_Cant_Go_for_That.mid.c"
#endif // MIDI_SONG


const uint16_t midi_note_frequencies[];

// midi player instance
MIDI_Player midi_player;

// Initialize music player
void midi_player_initialize()
{
     midi_player.samplespertick = 0xffff;
     midi_player.sample_timer=0xffff;
     midi_player.tick_timer=0xffff;
     midi_player.pevent=NULL;
}

// Start playing a mini midi song
void midi_player_start_song(uint8_t *psong)
{
    // set tempo
    midi_player.samplespertick = AUDIO_UPDATE_FREQUENCY/100;
    
    // set up track instruments
    audio_set_instrument(0,0,pinstrument);
    audio_set_instrument(0,1,pinstrument);
	audio_set_instrument(0,2,pinstrument);
	audio_set_instrument(0,3,pinstrument);

    // start song
    midi_player.pevent=psong;
    midi_player.first=true;
    midi_player.tick_timer=1;   // starts next update
}

// Stop playing a mini midi song
void midi_player_stop_song(void)
{
    audio_keyoff(0,1);
    audio_keyoff(0,2);
    audio_keyoff(0,3);
    audio_keyoff(0,4);

    midi_player.pevent=NULL;
    midi_player.first=false;
}

// Return true if mini midi player is playing a song
uint16_t midi_player_playing_song(void)
{
    return midi_player.pevent!=NULL;
}

// Midi update to be called at 44.1 kHz
void midi_player_update(void)
{
    if (midi_player.pevent)
    {
        if (--midi_player.sample_timer==0)
        {
            midi_player.sample_timer=midi_player.samplespertick;
            --midi_player.tick_timer;
            while(midi_player.tick_timer==0)
            {
                if (midi_player.first)
                {
                    // first iteration, skip pending event to first delay 
                    // (could be optimized if tick parsing was in a routine and called from song start)
                    midi_player.first=false;
                }
                else            
                {
                    // parse event at index
                    uint8_t d0=*midi_player.pevent++;
                    uint8_t d1=*midi_player.pevent++;

                    // v1
                    //uint16_t note = d0 & 0x7f;
                    //uint16_t velocity = (d1&0xfe);
                    //uint16_t voice = ((d0>>6)&0x02)|(d1&0x01);
                    //uint16_t volume = velocity;

                    // v2
                    uint16_t note = d0 & 0x7f;
                    uint16_t velocity = (d1&0xfc);
                    uint16_t voice = ((d0>>5)&0x04)|(d1&0x03);
                    uint16_t volume = velocity+3;

                    if (velocity>0)
                    {
                        uint16_t frequency = midi_note_frequencies[note];
                        audio_keyon(0,voice,frequency,volume);
                    }
                    else
                    {
                        audio_keyoff(0,voice);
                    }
                }
                
                uint8_t tick=*midi_player.pevent++;
                switch (tick)
                {
                    case 0xff:
                        // end of song
                        audio_keyoff(0,0);
                        audio_keyoff(0,1);
                        audio_keyoff(0,2);
                        audio_keyoff(0,3);                    
                        midi_player_initialize();
                        return;
                    case 0xfe:
                        // extended tick
                        tick=*midi_player.pevent++;
                        tick+=((uint16_t) *midi_player.pevent++)<<8;
                        break;
                    default:
                        midi_player.tick_timer=tick;
                }
            }
        }
    }
}

// Release music player
void midi_player_release(void)
{
    midi_player_stop_song();
}

// MIDI note frequencies C1 through G9
const uint16_t midi_note_frequencies[]={
    8, 9, 9, 10, 10, 11, 12, 12, 13, 14, 15, 15, 16, 17, 18, 19, 
    21, 22, 23, 25, 26, 28, 29, 31, 33, 35, 37, 39, 41, 44, 46, 49, 
    52, 55, 58, 62, 65, 69, 73, 78, 82, 87, 92, 98, 104, 110, 117, 123, 
    131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247, 262, 277, 
    294, 311, 330, 349, 370, 392, 415, 440, 466, 494, 523, 554, 587, 622, 
    659, 698, 740, 784, 831, 880, 932, 988, 1047, 1109, 1175, 1245, 1319, 
    1397, 1480, 1568, 1661, 1760, 1865, 1976, 2093, 2217, 2349, 2489, 2637, 2794, 
    2960, 3136, 3322, 3520, 3729, 3951, 4186, 4435, 4699, 4978, 5274, 5588, 5920, 
    6272, 6645, 7040, 7459, 7902, 8372, 8870, 9397, 9956, 10548, 11175, 11840, 12544,
};

