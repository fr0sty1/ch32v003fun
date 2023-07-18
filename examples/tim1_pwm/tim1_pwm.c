/*
 * Example for using Advanced Control Timer (TIM1) for PWM generation
 * 03-28-2023 E. Brombaugh
 */

#include "ch32v003fun.h"
#include <stdio.h>
#include "audio.h"

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
	
	// PC4 is T1CH4, 10MHz Output alt func, push-pull
	GPIOC->CFGLR &= ~(0xf<<(4*4));
	GPIOC->CFGLR |= (GPIO_Speed_10MHz | GPIO_CNF_OUT_PP_AF)<<(4*4);
		
	// Reset TIM1 to init all regs
	RCC->APB2PRSTR |= RCC_APB2Periph_TIM1;
	RCC->APB2PRSTR &= ~RCC_APB2Periph_TIM1;
	
	// CTLR1: default is up, events generated, edge align
	// SMCFGR: default clk input is CK_INT
	
	// Prescaler 
	TIM1->PSC = 0x0000;
	
	// Auto Reload - sets period
	// 10,000,000 / 44,100 = 226.757369615
	// 10,000,000 / 256 = 39,062.5 PWM frequency
	// 10,000,000 / 128 = 78,125   PWM frequency
	// 10,000,000 / 100 = 100,000  PWM frequency
	TIM1->ATRLR = 255;	
	
	// Reload immediately
	TIM1->SWEVGR |= TIM_UG;
	
	// Enable CH1N output, positive pol
	TIM1->CCER |= TIM_CC1NE | TIM_CC1NP;
	
	// Enable CH4 output, positive pol
	TIM1->CCER |= TIM_CC4E | TIM_CC4P;
	
	// CH1 Mode is output, PWM1 (CC1S = 00, OC1M = 110)
	TIM1->CHCTLR1 |= TIM_OC1M_2 | TIM_OC1M_1;
	
	// CH2 Mode is output, PWM1 (CC1S = 00, OC1M = 110)
	TIM1->CHCTLR2 |= TIM_OC4M_2 | TIM_OC4M_1;
	
	// Set the Capture Compare Register value to 50% initially
	TIM1->CH1CVR = 128;
	TIM1->CH4CVR = 128;
	
	// Enable TIM1 outputs
	TIM1->BDTR |= TIM_MOE;
	
	// Enable TIM1
	TIM1->CTLR1 |= TIM_CEN;
}

/*
 * set timer channel PW
 */
void t1pwm_setpw(uint8_t chl, uint16_t width)
{
	switch(chl&3)
	{
		case 0: TIM1->CH1CVR = width; break;
		case 1: TIM1->CH2CVR = width; break;
		case 2: TIM1->CH3CVR = width; break;
		case 3: TIM1->CH4CVR = width; break;
	}
}

/*
 * force output (used for testing / debug)
 */
void t1pwm_force(uint8_t chl, uint8_t val)
{
	uint16_t temp;
	
	chl &= 3;
	
	if(chl < 2)
	{
		temp = TIM1->CHCTLR1;
		temp &= ~(TIM_OC1M<<(8*chl));
		temp |= (TIM_OC1M_2 | (val?TIM_OC1M_0:0))<<(8*chl);
		TIM1->CHCTLR1 = temp;
	}
	else
	{
		chl &= 1;
		temp = TIM1->CHCTLR2;
		temp &= ~(TIM_OC1M<<(8*chl));
		temp |= (TIM_OC1M_2 | (val?TIM_OC1M_0:0))<<(8*chl);
		TIM1->CHCTLR2 = temp;
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

	extern AL_Instrument audio_instrument_sine;
	audio_setinstrument(0,0,&audio_instrument_sine);
	audio_setinstrument(0,1,&audio_instrument_sine);
	audio_setinstrument(0,2,&audio_instrument_sine);

	
	audio_keyon(0,0,200,255);	// channel 0 voice 0 200Hz full volume
	/*
	// A very pleasant major chord
	audio_keyon(0,0,200,255/4);	// channel 0 voice 0 200Hz full volume
	audio_keyon(0,1,250,255/4);	// channel 1 voice 0 250Hz full volume
	audio_keyon(0,2,300,255/4);	// channel 2 voice 0 300Hz full volume
	audio_keyon(0,3,350,255/4);	// channel 2 voice 0 300Hz full volume
	*/
	// Prepare for 44.1 kHz audio system update 
	// SysTick->CNT 42.17us = 256 -> 6070666.35049 Hz 
	uint32_t step = (6000000/AUDIO_UPDATE_FREQUENCY)+1;
	uint32_t next_tick = SysTick->CNT+step;
	
	uint32_t secondtimer=AUDIO_UPDATE_FREQUENCY;
	uint16_t keyfrequency=200;


	printf("looping...\n\r");
	while(1)
	{
		// wait for next 44.1 kHz cycle to update audio library
		if ((next_tick - SysTick->CNT) & 0x80000000 )
		{
			// Set profiling bit 
			GPIOD->BSHR = (1<<4);	 // Turn on D4
			// Advance target count for next 44.1kHz cycle
			next_tick+=step;
			
			// update audio driver 
			audio_update();

			// set channel 0 pwm value	
			t1pwm_setpw(0, audio_getchannelvalue(0)); // PWM output on pin D0
			
			// set channel 1 pwm value
			//t1pwm_setpw(3, (SysTick->CNT&0x00001000? 255:0));	// Chl 4
			
			// clear profiling bit
			GPIOD->BSHR = (1<<(16+4)); // Turn off D4

			if (--secondtimer==0)
			{
				secondtimer=AUDIO_UPDATE_FREQUENCY;
				if (audio_system.channel[0].voice[0].playing)
				{
					audio_system.channel[0].voice[0].adsr_phase='r';
				}
				else
				{
					keyfrequency=(keyfrequency>1000)? 200 : keyfrequency+200;
					audio_keyon(0,0,keyfrequency,255);	// channel 0 voice 0 freq, velocity
				}
			}
		}

		// do whatever else your program needs to do here 
		// but it shouldnt't take more than what's left in the 44.1 Khz cycle
		// or else audio distortion will result
		// todo Audio Library needs to use interrupts
		// todo pin input for 1 button piano
	}

	// Shutdown audio system
	audio_release();
}
 