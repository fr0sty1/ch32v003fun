/*
    Mini midi player for the CH32V003 audio library
    by D. Scott Williamson 2023
*/

#ifndef MIDI_LIBRARY
#define MIDI_LIBRARY


typedef struct
{
    uint16_t samplespertick;    // 44.1 kHz samples per midi tick
    uint16_t sample_timer;      // sample timer
    uint16_t tick_timer;        // ticks until next event
    uint8_t  *pevent;           // pointer to next event, NULL if not playing
    uint8_t  first;             // flag needed for first event
} MIDI_Player;

// Initialize music player
void midi_player_init(void);    

// Start playing a mini midi song
void midi_player_startsong(uint8_t *psong);

// Midi update to be called at 44.1 kHz
void midi_player_update(void);

#endif //#ifndef MIDI_LIBRARY