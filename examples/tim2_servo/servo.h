#ifndef TIM2_SERVO_H
#define TIM2_SERVO_H

//Mininum and maximum pulse width (corresponds to 0.5-2.5ms)
#define TIM2_SERVO_MIN 375
#define TIM2_SERVO_MAX 1875

//Initialize the selected channels of Timer2
// uint8_t channels is a bitmap selecting which timer channels to configure
//Channel1: 1<<0  PD4
//Channel2: 1<<1  PD3
//Channel3: 1<<2  PC0 (If channel 3 is initialized GPIOC must also be enabled along with GPIOD)
//Channel4: 1<<3  PD7
//this function starts the PWM channels but the initial pulse width is 0
//timer should use /64 prescalar so clock is 750kHz and each tick is 1.33microseconds
//timer should rollover every 15000ticks (20ms)
void tim2_servo_init( uint8_t channels);


//Set the pulse width on the selected channels to the selected value
//width = 0 no pulse
//All other width values are clamped to the MIN-MAX range
//
void tim2_servo_set( uint8_t channels, uint16_t width);

#endif //TIM2_SERVO_H
