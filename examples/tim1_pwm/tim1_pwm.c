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
#include "audio.h"
#include "midi.h"

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

	// GPIO D4 Push-Pull
	GPIOD->CFGLR &= ~(0xf<<(4*4));
	GPIOD->CFGLR |= (GPIO_Speed_10MHz | GPIO_CNF_OUT_PP)<<(4*4);

	// Make C1-C7 input
	for(int i=0; i<=7; ++i)
	{
		// config pin for input with pullup
		GPIOC->CFGLR &= ~(0xf<<(4*i));
		GPIOC->CFGLR |= (GPIO_Speed_In | GPIO_CNF_IN_PUPD)<<(4*i);
		
		// Set input to puldown
		GPIOC->OUTDR &=~(1<<i);

		// Set input to pullup
		//GPIOC->OUTDR |= (1<<i);
	}

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

uint16_t readkeypad(void)
{
	/*
	c0 row 0
	c1 row 1
	c2 row 2
	c3 row 3

	c5 column 0
	c6 column 1
	c7 column 2
	*/

	// PD1-PD7 is input with pullup/down
	uint16_t value=0;
	
	for(int i=0; i<=3; ++i)
	{

		// set row pin to output
		GPIOC->CFGLR &= ~(0xf<<(4*i));
		GPIOC->CFGLR |= (GPIO_Speed_2MHz | GPIO_CNF_OUT_PP)<<(4*i);

		GPIOC->BSHR = (1<<i);	 	 // Turn on row pin
		
		// integrate input into value
		value<<=4;
		value|=(GPIOC->INDR>>5) & 0x7;

		GPIOC->BSHR = (1<<(16+i)); // Turn row pin off

		// set row pin to input
		GPIOC->CFGLR &= ~(0xf<<(4*i));
		GPIOC->CFGLR |= (GPIO_Speed_In | GPIO_CNF_IN_PUPD)<<(4*i);
	}

	return value;
}

extern uint8_t song[];

/*
 * entry
 */
int main()
{

    // REQUIRED for programming/debugging: SWIO is on PD1. Do not re-use PD1 for multiple functions.
    // OPTIONAL NRST is on PD7. Not needed, defaults as GPIO in some configurations.
    // OPTIONAL UART TX is on: PD5. We recommend using SWIO for printf debugging.

	//uint32_t count = 0;
	
	SystemInit();
	Delay_Ms( 100 );

	printf("\r\r\n\ntim1_pwm example\n\r");

	// init TIM1 for PWM
	printf("initializing tim1...");
	t1pwm_init();
	printf("done.\n\r");
		
	// Initializ audio system
	audio_initialize();

	// Initialize mini midi player
	midi_player_initialize();

#define INTERVAL1 (2*6000000)
#define INTERVAL2 (1*6000000)

	uint32_t timertarget=SysTick->CNT+INTERVAL1;
	uint32_t timerstate=0;
	uint16_t pitch=90;

	uint16_t keys, pkeys;

	midi_player_start_song(0,song);

	//printf("looping...\n\r");
	while(true)
	{
		#if 0
		keys = readkeypad();
		if (keys!=pkeys)
		{
			//if (keys) printf("Key: %04x\n",keys);
			pkeys=keys;
		}
		
		switch (keys)
		{
			case 0x1000:	// *
				if ((timertarget-SysTick->CNT) & 0x80000000)
				{
					switch (timerstate)
					{
						case 0:
							//GPIOD->BSHR = (1<<4);	 	 // Turn on  D4 for debug profiling
							//GPIOD->BSHR = (1<<(16+4)); // Turn off D4 for debug profilingtimerstate=0;
							++timerstate;
							timertarget+=INTERVAL1;
							extern AL_Instrument audio_instrument_violin;
							audio_set_instrument(0,0,&audio_instrument_violin);
							extern uint16_t midi_note_frequencies[];
							printf("pitch=%d %d\n",midi_note_frequencies[pitch],pitch);
							audio_keyon(0,0,midi_note_frequencies[pitch--],255);
							break;

						case 1:
							
							timertarget+=INTERVAL2;
							timerstate=0;
							audio_keyoff(0,0);
							break;
					}
				}
				break;

				// Start the song
			case 0x4000:	// #
				midi_player_start_song(song);
				break;
		}
		#else
		
		// Restart song if it ends		
		if (midi_player_playing_song()==false)
		{
			// Start the song
			extern uint8_t song[];
			midi_player_start_song(0,song);
		}
		#endif		
		
			// Keep audio fifo full
		while (fifo_free(&audio_system.fifo))
		{
			//GPIOD->BSHR = (1<<4);	 	 // Turn on  D4 for debug profiling

			// Update midi player
			midi_player_update();

			// Update audio system
			audio_update();
			
			// Write current audio sample to the fifo
			fifo_write(&audio_system.fifo,audio_get_channel_value(0));

			//GPIOD->BSHR = (1<<(16+4)); // Turn off D4 for debug profiling
		}




		
		// Do whatever your program needs to do here, so long as it doesn't
		// starve the audio fifo or disrupt the timer 1 interrupt 
	}

	// Shut down mini midi player
	midi_player_release();

	// Shut down audio system
	audio_release();
}
 