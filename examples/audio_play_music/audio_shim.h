/*
    audio_shim.h
    Audio Library Shim 
    (c) 2023 D. Scott Williamson
    spot1984@gmail.com

    This file is the header for the compilation adapter to the audio and music libraries 
    (audio.c, audio.h, midi.c, and midi.h) that allow programs to configure the audio 
    and music libraries for the application without modification of the library files.  
    Copies and/or modifications of this file are considered uses of the audio and music 
    libraries configuration interface and do not constitute modification of the 
    libraries Source provided under the LGPL 3.0 license.
    
*/

// Audio library configuration header (unlicensed)
// It is where you make modifications to configure the audio library
#include "audio_configuration.h"

// Audio library hardware abstraction layer for the ch32v003 (unlicensed)
// This file should not require modification
// This file depends ch32v003fun.h provided as part of the ch32v003fun project
// provided under MIT license and Copyright (c) 2023 CNLohr.
#include "../../audiolib/audio_hal_ch32v003.h"

// Audio library header (License: LGPL 3.0)
#include "../../audiolib/audio.h"

// Mini midi library header (License: LGPL 3.0)
#include "../../audiolib/midi.h"