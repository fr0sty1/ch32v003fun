/*
 * Audio library and mini midi player example
 * by D. Scott Williamson 7/14/2023
 * 
 * Adapted PWM from ch32v003fun
 * 		Example for using Advanced Control Timer (TIM1) for PWM generation
 *	 	03-28-2023 E. Brombaugh
 */

#include "ch32v003fun.h"
#include <stdio.h>
#include <stdbool.h>
#include "audio_shim.h"

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
// 10 Godzilla
// 11 Blister in the Sun
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

#elif MIDI_SONG==10
#include "godzilla-30.mid8.c"
extern AL_Instrument audio_instrument_synth;
AL_Instrument *pinstrument= &audio_instrument_synth;

#elif MIDI_SONG==11
#include "blister.mid8.c"
extern AL_Instrument audio_instrument_piano;
AL_Instrument *pinstrument= &audio_instrument_piano;

#endif // MIDI_SONG

/*
 * initialize TIM1 for PWM
 */
void t1pwm_init( void )
{
	// Enable GPIOC, GPIOD and TIM1
	RCC->APB2PCENR |= 	RCC_APB2Periph_GPIOD | RCC_APB2Periph_GPIOC |
						RCC_APB2Periph_TIM1;
	
	// PD0 is T1CH1N, 10MHz Output alt func, push-pull
	GPIOD->CFGLR &= ~(0xf<<(4*0));
	GPIOD->CFGLR |= (GPIO_Speed_10MHz | GPIO_CNF_OUT_PP_AF)<<(4*0);

	// Reset TIM1 to init all regs
	RCC->APB2PRSTR |= RCC_APB2Periph_TIM1;
	RCC->APB2PRSTR &= ~RCC_APB2Periph_TIM1;
	
	// CTLR1: default is up, events generated, edge align
	// SMCFGR: default clk input is CK_INT

	// Prescaler 
	// CH32V003RM.pdf 
	//	10.2.3 Counters and peripherals
	// 		CK_PSC is input to the prescaler (PSC) for dividing. the PSC is 16-bit and 
	// 		the actual dividing factor is equal to the value of R16_TIMx_PSC + 1.
	TIM1->PSC = AUDIO_TIMER_PRESCALER-1;
	
	// Auto Reload - sets period and PWM max width
	TIM1->ATRLR = AUDIO_TIMER_RELOAD;	

	// Reload immediately
	TIM1->SWEVGR |= TIM_UG;
	
	// Enable CH1N output, positive pol
	TIM1->CCER |= TIM_CC1NE | TIM_CC1NP;
	
	// Enable CH4 output, positive pol
	TIM1->CCER |= TIM_CC4E | TIM_CC4P;
	
	// CH1 Mode is output, PWM1 (CC1S = 00, OC1M = 110)
	TIM1->CHCTLR1 |= TIM_OC1M_2 | TIM_OC1M_1;
	
	// Set the Capture Compare Register value to 50% initially
	TIM1->CH1CVR = 128;
	
	// Enable TIM1 outputs
	TIM1->BDTR |= TIM_MOE;
	
	NVIC_EnableIRQ( TIM1_UP_IRQn );
    TIM1->INTFR = ~TIM_FLAG_Update;
    TIM1->DMAINTENR |= TIM_IT_Update;

	// Enable TIM1
	TIM1->CTLR1 |= TIM_CEN;
}

// Timer 1 "UP" reload interrupt service routine
void TIM1_UP_IRQHandler(void) __attribute__((interrupt));
void TIM1_UP_IRQHandler() {
    if(TIM1->INTFR & TIM_FLAG_Update) {
        TIM1->INTFR = ~TIM_FLAG_Update;
		// Set channel 0 pwm value from fifo
		TIM1->CH1CVR = fifo_read(&audio_system.fifo); // PWM output on pin D0
    }
}

/*
 * entry
 */
int main()
{
	SystemInit();
	Delay_Ms( 100 );

	printf("\r\r\n\naudio_play_song example\n\r");

	// init TIM1 for PWM
	printf("initializing tim1...");
	t1pwm_init();
	printf("done.\n\r");
		
	// Initializ audio system
	printf("initializing audio system...");
	audio_initialize();

	// Initialize mini midi player
	printf("initializing mini midi player...");
	midi_player_initialize();

	// Set up track instruments
	for(int voice=0; voice<AUDIO_VOICES; ++voice)
	{
		audio_set_instrument(0,voice,pinstrument);
	}

	printf("looping...\n\r");
	while(true)
	{
		// Play the song if none is playing 
		if (midi_player_playing_song()==false)
		{

			// Start the song
			midi_player_start_song(0,(uint8_t*) song);
		}
		
		// Keep audio fifo full
		while (fifo_free(&audio_system.fifo))
		{
			// Update midi player
			midi_player_update();

			// Update audio system
			audio_update();
			
			// Write current audio sample to the fifo
			fifo_write(&audio_system.fifo,audio_get_channel_value(0));

		}
		
		// Do whatever your program needs to do here, so long as it doesn't
		// starve the audio fifo or disrupt the timer 1 interrupt 
	}

	// Shut down mini midi player
	printf("releasing mini midi player...");
	midi_player_release();

	// Shut down audio system
	printf("initializing audio system...");
	audio_release();
}
 