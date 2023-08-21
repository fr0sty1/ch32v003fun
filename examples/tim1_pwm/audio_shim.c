/*
    audio_shim.c
    Audio Library Shim 
    (c) 2023 D. Scott Williamson
    spot1984@gmail.com

    This file is the compilation adapter to the audio and music libraries (audio.c, 
    audio.h, midi.c, and midi.h) that allow programs to configure the audio and music
    libraries for the application without modification of the library files.  Copies 
    and/or modifications of this file are considered uses of the audio and music 
    libraries configuration interface and do not constitute modification of the 
    Library Source provided under the LGPL 3.0 license.

*/

// Audio shim headeer (unlicensed)
// The shim header includes the local configuration header, the hal header
// audio library header, and midi library headers.
#include "audio_shim.h"

// Audio library source (License: LGPL 3.0)
#include "../../audiolib/audio.c"

// Mini midi library header (License: LGPL 3.0)
#include "../../audiolib/midi.c"