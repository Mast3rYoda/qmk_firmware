#include QMK_KEYBOARD_H

#include "keymap_german.h"

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

#define EISU LALT(KC_GRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  
   /* Qwerty
   * ,----------------------------------------------------------------------------------------------------------------------.
   * | ESC  |   1  |   2  |   3  |   4  |   5  |   [  |                    |   ]  |   6  |   7  |   8  |   9  |   0  |Pscree|
   * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
   * |  `   |   Q  |   W  |   E  |   R  |   T  |   -  |                    |   =  |   Y  |   U  |   I  |   O  |   P  |  \   |
   * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
   * | Tab  |   A  |   S  |   D  |   F  |   G  |  Del |                    | Bksp |   H  |   J  |   K  |   L  |   ;  |  "   |
   * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
   * | Shift|   Z  |   X  |   C  |   V  |   B  | Space|                    | Enter|   N  |   M  |   ,  |   .  |   /  | Shift|
   * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------|
   * | Ctrl |  GUI |  ALt | EISU |||||||| Lower| Space|  Del |||||||| Bksp | Enter| Raise|||||||| Left | Down |  Up  | Right|
   * ,----------------------------------------------------------------------------------------------------------------------.
   */
  // [_QWERTY] = LAYOUT(
  //   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC,                        KC_RBRC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PSCR,
  //   KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_MINS,                        KC_EQL , KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //   KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_DEL ,                        KC_BSPC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_SPC ,                        KC_ENT , KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //   KC_LCTL, KC_LGUI, KC_LALT, EISU,             LOWER,   KC_SPC ,KC_DEL,         KC_BSPC,KC_ENT , RAISE,            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  // ),
  /* Qwerty - my version
   * ,----------------------------------------------------------------------------------------------------------------------.
   * | ESC  |   1  |   2  |   3  |   4  |   5  |   ^  |                    |   ´  |   6  |   7  |   8  |   9  |   0  |   -  |
   * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |   #  |                    |   +  |   Y  |   U  |   I  |   O  |   P  |   Ü  |
   * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
   * | Ctrl |   A  |   S  |   D  |   F  |   G  |  <>  |                    |   -  |   H  |   J  |   K  |   L  |   Ö  |   Ä  |
   * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
   * | Shift|   Z  |   X  |   C  |   V  |   B  | Space|                    | Enter|   N  |   M  |   ,  |   .  |   -  | Shift|
   * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------|
   * | Ctrl |  GUI |  ALt |  ALt |||||||| Lower| Space|  Del |||||||| Bksp | Enter| Raise||||||||  GUI | Left | Down | Right|
   * ,----------------------------------------------------------------------------------------------------------------------.
   */
  [_QWERTY] = LAYOUT(
    KC_ESC,  DE_1,    DE_2,    DE_3,    DE_4,    DE_5,    DE_CIRC,                        DE_ACUT, DE_6,    DE_7,    DE_8,    DE_9,    DE_0,    KC_MINS,
    KC_TAB,  DE_Q,    DE_W,    DE_E,    DE_R,    DE_T,    KC_BSLS,                        DE_PLUS, DE_Z,    DE_U,    DE_I,    DE_O,    DE_P,    DE_UDIA,
    KC_LCTL, DE_A,    DE_S,    DE_D,    DE_F,    DE_G,    DE_LABK,                        DE_MINS, DE_H,    DE_J,    DE_K,    DE_L,    DE_ODIA, DE_ADIA,
    KC_LSFT, DE_Y,    DE_X,    DE_C,    DE_V,    DE_B,    KC_SPC ,                        KC_ENT , DE_N,    DE_M,    KC_COMM, KC_DOT,  DE_MINS, KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_LALT,          LOWER,   KC_SPC ,KC_DEL,         KC_BSPC,KC_ENT , RAISE,            KC_LGUI, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  /* Lower
   * ,----------------------------------------------------------------------------------------------------------------------.
   * |  F11 |  F1  |  F2  |  F3  |  F4  |  F5  |   {  |                    |   }  |  F6  |  F7  |  F8  |  F9  |  F10 |  F12 |
   * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
   * | Esc  |   !  |   "  |   §  |   $  |   %  |   _  |                    |   +  |   &  |   /  |   (  |   )  |   =  |  ß   |
   * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
   * | Ctrl |   1  |   2  |   3  |   4  |   5  |  Del |                    | Bksp |   +  |   {  |   [  |   ]  |   }  |  \   |
   * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
   * | Shift|   6  |   7  |   8  |   9  |   ^  |  Del |                    | Bksp |   #  |   |  |   <  |   >  | Vol+ | Shift|
   * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------|
   * | Ctrl |  GUI |  ALt |  ALt |||||||| Lower|  Del |  Del |||||||| Bksp | Bksp | Raise||||||||  GUI | Home | Vol- |  End |
   * ,----------------------------------------------------------------------------------------------------------------------.
   */
  [_LOWER] = LAYOUT(
    KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_LCBR,                        KC_RCBR, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12,
    KC_ESC,  DE_EXLM, DE_DQUO, DE_SECT, DE_DLR,  DE_PERC, KC_UNDS,                        KC_PLUS, DE_AMPR, DE_SLSH, DE_LPRN, DE_RPRN, DE_EQL,  DE_SS,
    KC_LCTL, DE_1,    DE_2,    DE_3,    DE_4,    DE_5,    KC_DEL ,                        KC_BSPC, DE_PLUS, DE_LCBR, DE_LBRC, DE_RBRC, DE_RCBR, DE_BSLS,
    KC_LSFT, DE_6,    DE_7,    DE_8,    DE_9,    DE_CIRC, KC_DEL ,                        KC_BSPC, KC_BSLS, DE_PIPE, DE_LABK, DE_RABK, KC_AUDIO_VOL_UP, KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_LALT,          LOWER,   KC_DEL , KC_DEL,       KC_BSPC, KC_BSPC, RAISE,            KC_LGUI, KC_HOME, KC_AUDIO_VOL_DOWN, KC_END
  ),
  

  /* Raise
   * ,----------------------------------------------------------------------------------------------------------------------.
   * |  F11 |  F1  |  F2  |  F3  |  F4  |  F5  |   {  |                    |   }  |  F6  |  F7  |  F8  |  F9  |  F10 |  F12 |
   * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
   * | Esc  |   !  |   "  |   §  |   $  |   %  |   _  |                    |   +  |   &  |   /  |   (  |   )  |   =  | Vol+ |
   * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
   * | Ctrl |   1  |   2  |   3  |   4  |   5  |  Del |                    | Bksp |   H  |   ´  |  Up  |   L  |   :  | Vol- |
   * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
   * | Shift|   6  |   7  |   8  |   9  |   0  |  Del |                    | Bksp |   N  | Left | Down | Right|   ?  | Shift|
   * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------|
   * | Ctrl |  GUI |  ALt |  ALt |||||||| Lower|  Del |  Del |||||||| Bksp | Bksp | Raise||||||||  GUI |PageDn|PageUp|  End |
   * ,----------------------------------------------------------------------------------------------------------------------.
   */
  [_RAISE] = LAYOUT(
    KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_LCBR,                        KC_RCBR, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12,
    KC_ESC,  DE_EXLM, DE_DQUO, DE_SECT, DE_DLR,  DE_PERC, KC_UNDS,                        KC_PLUS, DE_AMPR, DE_SLSH, DE_LPRN, DE_RPRN, DE_EQL,  KC_AUDIO_VOL_UP,
    KC_LCTL, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_DEL ,                        KC_BSPC, KC_H,    DE_ACUT, KC_UP,   KC_L,    KC_COLN, KC_AUDIO_VOL_DOWN,
    KC_LSFT, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL ,                        KC_BSPC, KC_N,    KC_LEFT, KC_DOWN, KC_RGHT, KC_QUES, KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_LALT,          LOWER,   KC_DEL , KC_DEL,       KC_BSPC, KC_BSPC, RAISE,            KC_LGUI, KC_PGDN, KC_PGUP, KC_END
  ),

  /* Adjust
   * ,----------------------------------------------------------------------------------------------------------------------.
   * |      |      |      |      |      |      |      |                    |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
   * |  F12 |  F1  |  F2  |  F3  |  F4  |  F5  |      |                    |      |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |
   * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
   * |      |      |RGB ON| MODE | HUE- | HUE+ |      |                    |      | SAT- | SAT+ | VAL- | VAL+ |      |      |
   * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
   * |      |      | BL ON| BRTG | INC  | DEC  |      |                    |      |      |      |      |      |      |      |
   * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------|
   * |      |      |      |      ||||||||      |      |      ||||||||      |      |      ||||||||      |      |      |      |
   * ,----------------------------------------------------------------------------------------------------------------------.
   */
  [_ADJUST] = LAYOUT(
    _______, _______, _______, _______, _______, _______,_______,                       _______, _______, _______, _______, _______, _______, _______,
    KC_F11 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,_______,                       _______, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F12 ,
    _______, RESET  , RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI,_______,                       _______, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, _______, _______,
    _______, _______, BL_TOGG, BL_BRTG, BL_INC , BL_DEC ,_______,                       _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______,          _______,_______,_______,       _______,_______, _______,          _______, _______, _______, _______
  )
};

#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
         print("mode just switched to qwerty and this is a huge string\n");
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
