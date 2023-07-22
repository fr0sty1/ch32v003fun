#include "ch32v003fun.h"
#include "servo.h"
#include <stdio.h>

/*
 * entry
 */
int main()
{
	uint16_t count1 = TIM2_SERVO_MIN ;
	uint16_t count2 = (TIM2_SERVO_MAX - TIM2_SERVO_MIN) >> 1;
	SystemInit();
	Delay_Ms( 100 );

	printf("\r\r\n\ntim2_servo example\n\r");
	// init TIM2 for Servo PWM
	printf("initializing tim2...");
	tim2_servo_init(0x3); //initialize channels 1 and 2
	printf("done.\n\r");
		
	printf("looping...\n\r");
	while(1)
	{
		tim2_servo_set(0x1, count1);	// Channel 1
		tim2_servo_set(0x2, count2);	// Channell 2 180° out-of-phase
		count1++;
		count2++;
		if(count1 > TIM2_SERVO_MAX) count1 = TIM2_SERVO_MIN;
		if(count2 > TIM2_SERVO_MAX) count2 = TIM2_SERVO_MIN;
		Delay_Ms( 5 );
	}
}
