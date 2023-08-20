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

*/
#include "ch32v003fun.h"
#include "audio_configuration.h"
#include "audio_hal_ch32v003.h"

const uint16_t audio_channels = AUDIO_CHANNELS;
const uint32_t audio_update_frequency = AUDIO_UPDATE_FREQUENCY;
const uint16_t audio_voices_pow2 = AUDIO_VOICES_POW2;
const uint16_t audio_FIFO_size_pow2 = AUDIO_FIFO_SIZE_POW2;

