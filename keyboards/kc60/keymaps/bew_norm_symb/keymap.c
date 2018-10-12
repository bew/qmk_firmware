#include "kc60.h"
#include "keymap_french.h"

enum e_layers
{
  LAY_NORMAL = 0,
  LAY_SYMBOLS,
};

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Normal
   * ,-----------------------------------------------------------.
   * |    | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|   |PAU|Backsp |
   * |-----------------------------------------------------------|
   * | Tab | A | Z | E | R | T | Y | U | I | O | P | ^ | = | DEL |
   * |-----------------------------------------------------------|
   * | Esc  | Q | S | D | F | G | H | J | K | L | M | $ | Return |
   * |-----------------------------------------------------------|
   * | Shift  | W | X | C | V | B | N | , | ; | : | ! |  Shift   |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |    Space / Symbols    |Ctrl|    |    | Fn  |
   * `-----------------------------------------------------------'
   * PAU = Pause
   */
  [LAY_NORMAL] =
    LAYOUT_60_ansi(
      KC_ESC,   FR_1,     FR_2,     FR_3,     FR_4,     FR_5,     FR_6,     FR_7,     FR_8,     FR_9,     FR_0,     XXXXXXX,  KC_PAUSE, KC_BSPC, \
      KC_TAB,   FR_A,     FR_Z,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     FR_CIRC,  FR_EQL,   KC_DEL,  \
      KC_ESC,   FR_Q,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     FR_M,     FR_DLR,      KC_ENT,  \
           KC_LSFT,       FR_W,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     FR_COMM,  FR_SCLN,  FR_COLN,  FR_EXLM,     KC_RSFT, \
      KC_LCTL,  KC_LGUI,  KC_LALT,                      LT(LAY_SYMBOLS, KC_SPC),                          KC_RCTL,  XXXXXXX,  XXXXXXX,  XXXXXXX  \
    ),

  /* Symbols
   * ,-----------------------------------------------------------.
   * |    |F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |
   * |-----------------------------------------------------------|
   * |     | & | # | " | ' | ~ | ` | - | _ | @ | % | \ |PIP|     |
   * |-----------------------------------------------------------|
   * |      | ² | < | { | ( | [ |Lft|Dwn| Up|Rgt|   | * |        |
   * |-----------------------------------------------------------|
   * |        | > | } | ) | ] |   |SPC|   |   |   |   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |                       |    |    |    |     |
   * `-----------------------------------------------------------'
   * SPC = Space
   * PIP = Pipe (|)
   */
  [LAY_SYMBOLS] =
    LAYOUT_60_ansi(
      _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______, \
      _______,  FR_AMP,   FR_HASH,  FR_QUOT,  FR_APOS,  FR_TILD,  FR_GRV,   FR_MINS,  FR_UNDS,  FR_AT,    FR_PERC,  FR_BSLS,  FR_PIPE,  _______, \
      _______,  FR_SUP2,  FR_LESS,  FR_LCBR,  FR_LPRN,  FR_LBRC,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, XXXXXXX,  FR_ASTR,     _______, \
           _______,       FR_GRTR,  FR_RCBR,  FR_RPRN,  FR_RBRC,  XXXXXXX,  KC_SPC,   KC_HOME,  KC_PGDOWN,KC_PGUP,  KC_END,      _______, \
      _______,  _______,  _______,                      _______,                                          _______,  _______,  _______,  _______  \
    ),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
  return MACRO_NONE;
};
