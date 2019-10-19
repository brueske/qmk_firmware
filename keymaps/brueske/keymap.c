#include QMK_KEYBOARD_H
#ifdef AUDIO_ENABLE
#include "muse.h"
#endif
#include "eeprom.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL

enum planck_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
};

enum planck_layers {
  _BASE,
  _LOWER,
  _RAISE,
  _ADJUST,
  _LAYER4,
  _LAYER5,
  _LAYER6,
  _LAYER7,
  _LAYER8,
};


#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_planck_grid(KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_BSPACE,KC_ESCAPE,KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCOLON,KC_ENTER,KC_LSHIFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMMA,KC_DOT,KC_SLASH,KC_RSHIFT,MO(8),KC_LCTRL,KC_LALT,KC_LGUI,LOWER,KC_SPACE,KC_NO,RAISE,KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT),

  [_LOWER] = LAYOUT_planck_grid(KC_TILD,KC_EXLM,KC_AT,KC_HASH,KC_DLR,KC_PERC,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,LCTL(LGUI(LSFT(KC_4))),KC_DELETE,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_UNDS,KC_PLUS,KC_LCBR,KC_RCBR,KC_PIPE,KC_TRANSPARENT,LALT(LCTL(KC_D)),LALT(LCTL(KC_F)),LALT(LCTL(KC_G)),KC_F10,KC_F11,KC_F12,KC_NONUS_HASH,KC_NONUS_BSLASH,KC_HOME,KC_END,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_AUDIO_MUTE,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_PLAY_PAUSE),

  [_RAISE] = LAYOUT_planck_grid(KC_GRAVE,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,LCTL(LGUI(LSFT(KC_4))),KC_DELETE,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_MINUS,KC_EQUAL,KC_LBRACKET,KC_RBRACKET,KC_QUOTE,KC_BSLASH,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_NONUS_HASH,KC_NONUS_BSLASH,KC_PGUP,KC_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,MO(5),KC_LEFT,KC_DOWN,KC_RIGHT),

  [_ADJUST] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_DELETE,CLICKY_TOGGLE,CK_ON,CK_OFF,CK_UP,CK_DOWN,KC_TRANSPARENT,RGB_TOG,RGB_VAI,RGB_VAD,LED_LEVEL,RESET,KC_TRANSPARENT,MU_MOD,MU_ON,MU_OFF,MU_TOG,KC_TRANSPARENT,KC_TRANSPARENT,RGB_MOD,RGB_HUI,RGB_HUD,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [_LAYER4] = LAYOUT_planck_grid(KC_MAC_UNDO,KC_1,KC_2,KC_3,KC_4,KC_NO,KC_NO,KC_1,KC_2,KC_3,KC_4,KC_MAC_UNDO,KC_NO,KC_NO,KC_J,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_SPACE,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,TO(0),KC_NO,KC_NO,KC_NO,KC_TRANSPARENT,KC_SPACE,KC_NO,KC_TRANSPARENT,KC_NO,KC_NO,KC_NO,KC_NO),

  [_LAYER5] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_MUTE,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [_LAYER6] = LAYOUT_planck_grid(LCTL(KC_1),LCTL(KC_2),LCTL(KC_3),LCTL(KC_4),LCTL(KC_5),LCTL(KC_6),LCTL(KC_7),LCTL(KC_8),LCTL(KC_9),LCTL(KC_0),KC_TRANSPARENT,KC_BSPACE,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_GRAVE,KC_ENTER,KC_GRAVE,KC_Q,KC_W,KC_E,KC_TRANSPARENT,KC_B,KC_TRANSPARENT,KC_M,KC_TRANSPARENT,KC_Q,KC_W,KC_E,TO(0),KC_A,KC_S,KC_D,KC_T,KC_SPACE,KC_NO,MO(7),KC_T,KC_A,KC_S,KC_D),

  [_LAYER7] = LAYOUT_planck_grid(KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_BSPACE,KC_ESCAPE,KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCOLON,KC_ENTER,KC_LSHIFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMMA,KC_DOT,KC_SLASH,KC_RSHIFT,TO(0),KC_LCTRL,KC_LALT,KC_LGUI,KC_TRANSPARENT,KC_SPACE,KC_NO,KC_TRANSPARENT,KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT),

  [_LAYER8] = LAYOUT_planck_grid(KC_TRANSPARENT,TO(4),TO(6),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {31,96,127}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255} },

    [1] = { {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {0,183,238}, {30,96,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {50,153,244}, {50,153,244}, {30,96,255}, {30,96,255}, {30,96,255}, {0,0,0}, {32,176,255}, {32,176,255}, {32,176,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {33,255,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {33,255,255}, {0,183,238}, {30,96,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,86,255}, {154,86,255}, {30,96,255}, {30,96,255}, {30,96,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {50,153,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {33,255,255}, {195,61,255}, {50,153,244}, {50,153,244} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {10,225,255}, {85,203,158}, {243,222,234}, {134,255,213}, {0,0,0}, {0,0,0}, {250,159,255}, {30,96,255}, {30,97,207}, {154,86,255}, {0,0,0}, {0,0,0}, {10,225,255}, {85,203,158}, {243,222,234}, {134,255,213}, {0,0,0}, {0,0,0}, {134,255,213}, {30,96,255}, {30,97,207}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {141,255,233}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {0,0,0}, {0,0,0}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,4,155}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,4,155}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {33,255,255}, {33,255,255}, {33,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {33,255,255}, {33,255,255}, {33,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {154,86,255}, {154,86,255}, {154,86,255}, {154,86,255}, {154,86,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {50,153,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {33,255,255}, {0,0,0}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {33,255,255}, {33,255,255}, {33,255,255}, {0,4,155}, {33,255,255}, {33,255,255}, {33,255,255}, {10,225,255}, {0,0,0}, {30,96,255}, {10,225,255}, {33,255,255}, {33,255,255}, {33,255,255} },

    [7] = { {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {33,255,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {0,4,155}, {30,96,255}, {30,96,255}, {30,96,255}, {0,0,0}, {30,96,255}, {0,0,0}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255} },

    [8] = { {0,0,0}, {33,255,255}, {33,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,4,155}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

#ifdef AUDIO_ENABLE
bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update(bool clockwise) {
    if (muse_mode) {
        if (IS_LAYER_ON(_RAISE)) {
            if (clockwise) {
                muse_offset++;
            } else {
                muse_offset--;
            }
        } else {
            if (clockwise) {
                muse_tempo+=1;
            } else {
                muse_tempo-=1;
            }
        }
    } else {
        if (clockwise) {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_DOWN);
            unregister_code(KC_MS_WH_DOWN);
        #else
            register_code(KC_PGDN);
            unregister_code(KC_PGDN);
        #endif
        } else {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_UP);
            unregister_code(KC_MS_WH_UP);
        #else
            register_code(KC_PGUP);
            unregister_code(KC_PGUP);
        #endif
        }
    }
}

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
    switch (keycode) {
    case RAISE:
    case LOWER:
        return false;
    default:
        return true;
    }
}
#endif

uint32_t layer_state_set_user(uint32_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
