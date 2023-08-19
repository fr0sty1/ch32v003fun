/*
    audio_hal_ch32v003.c
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
#include "ch32v003fun.h"
#include "audio_configuration.h"
#include "audio_hal_ch32v003.h"

// Audio actual update frequency based on system clock, 
// timer prescaler and reload values
uint16_t audio_actual_update_frequency(void)
{
    return AUDIO_ACTUAL_UPDATE_FREQUENCY;
}

