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
//#include "Brandenburg-Concerto-Nr-5-Bwv-1047.mid.c"
//#include "Toccata-and-Fugue-Dm_midi.c"
//#include "Fur-Elise.mid.c"
#include "korobeiniki.mid.c"    
//#include "In-the-hall-of-the-Mountain-King.mid.c"    
//#include "Hall_and_Oates_-_I_Cant_Go_for_That.mid.c"

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
    //extern AL_Instrument audio_instrument_organ;
    //extern AL_Instrument audio_instrument_synth;
    //extern AL_Instrument audio_instrument_drum;
    //extern AL_Instrument audio_instrument_cymbol;
    //extern AL_Instrument audio_instrument_violin;
    extern AL_Instrument audio_instrument_8bit;
    //extern AL_Instrument audio_instrument_piano;
    //extern AL_Instrument audio_instrument_bubble;
    //extern AL_Instrument audio_instrument_tom;

    AL_Instrument *pinstrument= &audio_instrument_8bit;
    
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
                    uint16_t note = d0 & 0x7f;
                    uint16_t velocity = (d1&0xfe);
                    uint16_t channel = ((d0>>6)&0x02)|(d1&0x01);
                    uint16_t volume = velocity;
                    if (velocity>0)
                    {
                        uint16_t frequency = midi_note_frequencies[note];
                        audio_keyon(0,channel,frequency,volume);
                    }
                    else
                    {
                        audio_keyoff(0,channel);
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

