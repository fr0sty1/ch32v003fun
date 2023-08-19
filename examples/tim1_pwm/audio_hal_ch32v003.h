/*
    audio_hal_ch32v003.h
    Audio Library HAL ch32v003
    (c) 2023 D. Scott Williamson
    spot1984@gmail.com

    This file is a configuration file for the Audio Library to be used with the CH32V003 
    processor.  
    
    This file depends on ch32v003fun.h provided under MIT license and Copyright (c) 2023 CNLohr.

    Copies and modifications of this file are considered uses of the Audio Library's configuration interface and 
    do not constitute modification of the Library Source provided under the LGPL 3.0 license.


    This file does not contain application confiburation parameters and does not require modification.
*/


#ifndef AUDIO_LIBRARY_HAL_CH32V003
#define AUDIO_LIBRARY_HAL_CH32V003

// Do not modify this file.

// Audio Timer Prescaler and reload value
#define AUDIO_TIMER_PRESCALER (FUNCONF_SYSTEM_CORE_CLOCK/(256*(AUDIO_UPDATE_FREQUENCY)))
#define AUDIO_TIMER_RELOAD (FUNCONF_SYSTEM_CORE_CLOCK/((AUDIO_TIMER_PRESCALER)*(AUDIO_UPDATE_FREQUENCY)))
// Actual audio update frequency based on system clock
// timer prescaler and reload values
#define AUDIO_ACTUAL_UPDATE_FREQUENCY (FUNCONF_SYSTEM_CORE_CLOCK/(AUDIO_TIMER_PRESCALER*AUDIO_TIMER_RELOAD))

// Audio timer prescaler (if using PWM)
inline uint32_t audio_timer_prescaler(void)
{
    return AUDIO_TIMER_PRESCALER;
};

// Audio timer relaod value (if using PWM)
inline uint32_t audio_timer_reload(void)
{
    return AUDIO_TIMER_RELOAD;
};

// Audio actual update frequency based on system clock, 
// timer prescaler and reload values
uint16_t audio_actual_update_frequency(void);

// Audio noise source, system clock
inline uint32_t audio_noise_source(void)
{
    return SysTick->CNT;
};

#endif  // AUDIO_LIBRARY_HAL_CH32V003