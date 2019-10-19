#pragma once

#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(STILL_ALIVE)
#endif

#ifdef AUDIO_ENABLE
#define AUDIO_CLICKY
#endif

#define MIDI_BASIC

#define PLANCK_EZ_LED_LOWER 1
#define PLANCK_EZ_LED_RAISE 2
#define PLANCK_EZ_LED_ADJUST 3

#define ENCODER_RESOLUTION 4

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
