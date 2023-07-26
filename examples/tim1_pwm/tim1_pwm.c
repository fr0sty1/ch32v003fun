/*
 * Example for using Advanced Control Timer (TIM1) for PWM generation
 * 03-28-2023 E. Brombaugh
 */

#include "ch32v003fun.h"
#include <stdio.h>
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

	// Reset TIM1 to init all regs
	RCC->APB2PRSTR |= RCC_APB2Periph_TIM1;
	RCC->APB2PRSTR &= ~RCC_APB2Periph_TIM1;
	
	// CTLR1: default is up, events generated, edge align
	// SMCFGR: default clk input is CK_INT

//	 Clock 	 		48,000,000 						
//	 Prescaler 		4			5			6			7			8			9			10
//	 Scaled clock 	12,000,000 	9,600,000 	8,000,000 	6,857,143 	6,000,000 	5,333,333 	4,800,000 
//	 Reload (PWM) 	256			256			256			256			256			256			256
//	 Act Freq.	 	46,875 	 	37,500 	 	31,250 	 	26,786 	 	23,438 	 	20,833 	 	18,750 
//	 Target 	 	44,100 	 	32,000 	 	30,000 	 	22,000 	 	22,000 	 	20,000 	 	18,750 
//	 Reload 		272			300			267			312			273			267			256
//	 Eff. Freq.	 	44,118 	 	32,000 	 	29,963 	 	21,978 	 	21,978 	 	19,975 	 	18,750 

	// Prescaler 
	TIM1->PSC = 4-1;
	
	// Auto Reload - sets period and PWM max width
	TIM1->ATRLR = 272;	
	
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
	midi_player_init();

	//printf("looping...\n\r");
	while(1)
	{
		//GPIOD->BSHR = (1<<4);	 	 // Turn on  D4
		//GPIOD->BSHR = (1<<(16+4)); // Turn off D4

		// Keep audio fifo full
		while (fifo_free(&audio_system.fifo))
		{
			// Update midi player
			midi_player_update();
			// Update audio system
			audio_update();
			// Write current audio sample to the fifo
			fifo_write(&audio_system.fifo,audio_getchannelvalue(0));
		}
		

		// Restart song if it ends		
		extern MIDI_Player midi_player;
		if (midi_player.pevent==NULL)
		{
			// Start the song
			extern uint8_t song[];
			midi_player_startsong(song);
		}
		
		// Do whatever your program needs to do here, so long as it doesn't
		// starve the audio fifo or disrupt the timer 1 interrupt 
	}

	// Shutdown audio system
	audio_release();
}
 