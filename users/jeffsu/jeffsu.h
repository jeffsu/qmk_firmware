#pragma once

#define PRESSED _______
#define __      _______



enum layer_names {
    _BASE = 0, // Base QWERTY layout + thumbs
    _NUM,      // Numbers
    _SYM,      // Symbols
    _NAV,      // Navigation
    _AUX,      // Aux

    // Window Placement with Amethyst
    _WIN,
    _SCR,

    // VIM mode experimental
    _VIN, // VI normal
};

// ┌───────────────────────────────────────────────────────────┐
// │ d e f i n e   k e y c o d e s                             │
// └───────────────────────────────────────────────────────────┘

#define AUX_SPC   LT(_AUX, KC_SPC)
#define AUX_BSPC  LT(_AUX, KC_BSPC)
#define AUX_PLAY  LT(_AUX, KC_MPLY)
#define RGUI_DOT  MT(MOD_RGUI|MOD_LCTL, KC_DOT)
#define NUM_SPC   LT(_NUM, KC_SPC)
#define SFT_ESC   MT(MOD_LSFT, KC_ESC)
#define NAV_ENT   LT(_NAV, KC_ENT)
#define SYM_BSPC  LT(_SYM, KC_BSPC)
#define WIN_F     MT(MOD_LALT, KC_F)
#define SCR_C     LT(_SCR, KC_C)
#define VIN_C     LT(_VIN, KC_C)
#define GUI_C     MT(MOD_LGUI, KC_C)
#define CTL_V     MT(MOD_LCTL, KC_V)

#define CTL_M     MT(MOD_LCTL, KC_M)
#define GUI_COM   MT(MOD_LGUI, KC_COMM)
#define ZOOM_MUTE LSFT(LGUI(KC_A))

#define SCREEN  LSFT(LGUI(KC_5))
#define LOCK    LCTL(LGUI(KC_Q))

// Aerospace
#define MOD2(x) LALT(LSFT(x))
#define MOD1(x) LALT(x)

#define TERM     LCTL(KC_GRAVE)
#define TERM_TOG LGUI(KC_J)

// OS bindings
#define HIGHLIGHT KC_LSFT
#define WORD_PREV  LALT(KC_LEFT)
#define WORD_NEXT  LALT(KC_RIGHT)
#define BEG_LINE   LGUI(KC_LEFT)
#define END_LINE   LGUI(KC_RIGHT)
#define WIN_PLUS   LGUI(KC_PLUS)
#define WIN_MINS   LGUI(KC_MINS)


// ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
// │ K E Y M A P S                                                                                                                                      │
// └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
// ▝▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀

//                  ╭──────────┬──────────┬──────────┬──────────┬──────────╮         BASE        ╭──────────┬──────────┬──────────┬──────────┬──────────╮
#define BASE1_____    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,                            KC_Y,      KC_U,      KC_I,      KC_O,      KC_P
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define BASE2_____    KC_A,      KC_S,      KC_D,      WIN_F,     KC_G,                            KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define BASE3_____    KC_Z,      KC_X,      GUI_C,     CTL_V,     KC_B,                            KC_N,      CTL_M,     GUI_COM,   RGUI_DOT,  KC_SLSH
//                  ╰──────────┴──────────┴──────────┼──────────┼──────────┼──────────┬──────────┼──────────┼──────────┼──────────┴──────────┴──────────╯
#define BASE4_____                                     KC_LCTL,   SYM_BSPC,  NAV_ENT,   SFT_ESC,   NUM_SPC,   KC_LALT
//                                                   ╰──────────┴──────────┴──────────┴──────────┴──────────┴──────────╯


//                  ╭──────────┬──────────┬──────────┬──────────┬──────────╮         NUM         ╭──────────┬──────────┬──────────┬──────────┬──────────╮
#define NUM1______    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,                            KC_6,      KC_7,      KC_8,      KC_9,      KC_0
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define NUM2______    _______,   _______,   _______,   HIGHLIGHT, _______,                         WORD_PREV, BEG_LINE,  END_LINE,  WORD_NEXT, _______
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define NUM3______    _______,   _______,   _______,   _______,   _______,                         _______,   WIN_MINS,  WIN_PLUS,  _______,   KC_BSLS
//                  ╰──────────┴──────────┴──────────┼──────────┼──────────┼──────────┬──────────┼──────────┼──────────┼──────────┴──────────┴──────────╯
#define NUM4______                                     _______,   AUX_BSPC,  _______,   _______,   PRESSED,   _______
//                                                   ╰──────────┴──────────┴──────────┴──────────┴──────────┴──────────╯

// QK_BOOT Must always be reachable by the left side of the keyboard
//                  ╭──────────┬──────────┬──────────┬──────────┬──────────╮         SYM         ╭──────────┬──────────┬──────────┬──────────┬──────────╮
#define SYM1______    KC_EXLM,   KC_AT,     KC_HASH,   KC_DLR,    KC_PERC,                         KC_CIRC,   KC_AMPR,   KC_ASTR,   KC_LPRN,   KC_RPRN
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define SYM2______    LOCK,      _______,   KC_DQUO,   KC_QUOT,   KC_GRAVE,                        KC_EQL,    KC_LCBR,   KC_RCBR,   KC_LBRC,   KC_RBRC
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define SYM3______    QK_BOOT,   _______,   _______,   _______,   _______,                         KC_PLUS,   KC_UNDS,   KC_MINS,   KC_TILDE,  KC_PIPE
//                  ╰──────────┴──────────┴──────────┼──────────┼──────────┼──────────┬──────────┼──────────┼──────────┼──────────┴──────────┴──────────╯
#define SYM4______                                     _______,   PRESSED,   _______,   _______,   AUX_SPC,   _______
//                                                   ╰──────────┴──────────┴──────────┴──────────┴──────────┴──────────╯

//                  ╭──────────┬──────────┬──────────┬──────────┬──────────╮         NAV         ╭──────────┬──────────┬──────────┬──────────┬──────────╮
#define NAV1______    _______,   _______,   _______,   _______,   _______,                         WORD_PREV, BEG_LINE,  END_LINE,  WORD_NEXT, _______
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define NAV2______    _______,   _______,   _______,   KC_LSFT,   _______,                         KC_LEFT,   KC_DOWN,   KC_UP,     KC_RIGHT,  KC_TAB
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define NAV3______    _______,   _______,   _______,   _______,   _______,                         KC_PGUP,   KC_UNDS,   KC_MINS,   KC_PGDN,   _______
//                  ╰──────────┴──────────┴──────────┼──────────┼──────────┼──────────┬──────────┼──────────┼──────────┼──────────┴──────────┴──────────╯
#define NAV4______                                     _______,   _______,   PRESSED,   KC_TAB,    TERM,      TERM_TOG
//                                                   ╰──────────┴──────────┴──────────┴──────────┴──────────┴──────────╯


//                  ╭──────────┬──────────┬──────────┬──────────┬──────────╮         WIN         ╭──────────┬──────────┬──────────┬──────────┬──────────╮
#define WIN1______    _______,   _______,   _______,   _______,   _______,                         _______, MOD1(KC_U),MOD1(KC_I),MOD1(KC_O),  _______
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define WIN2______    _______,   _______,   _______,   PRESSED,   _______,                       MOD1(KC_H),MOD1(KC_J),MOD1(KC_K),MOD1(KC_L),  _______
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define WIN3______    _______,   _______,   _______,   _______,   _______,                         _______,MOD1(KC_M),MOD1(KC_COMM),_______,   _______
//                  ╰──────────┴──────────┴──────────┼──────────┼──────────┼──────────┬──────────┼──────────┼──────────┼──────────┴──────────┴──────────╯
#define WIN4______                                     _______,   _______,   _______,  MOD1(KC_1),MOD1(KC_2),MOD2(KC_3)
//                                                   ╰──────────┴──────────┴──────────┴──────────┴──────────┴──────────╯

//                  ╭──────────┬──────────┬──────────┬──────────┬──────────╮         SCR         ╭──────────┬──────────┬──────────┬──────────┬──────────╮
#define SCR1______    _______,   _______,   _______,   _______,   _______,                         _______,   _______,   _______,   _______,   _______
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define SCR2______    _______,   _______,   _______,   _______,   _______,                        MOD1(KC_1),MOD1(KC_2),MOD1(KC_3),MOD1(KC_4),MOD1(KC_5)
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define SCR3______    _______,   _______,   PRESSED,   _______,   _______,                         _______,   _______,   _______,   _______,   _______
//                  ╰──────────┴──────────┴──────────┼──────────┼──────────┼──────────┬──────────┼──────────┼──────────┼──────────┴──────────┴──────────╯
#define SCR4______                                     _______,   _______,   _______,   _______,   _______,   _______
//                                                   ╰──────────┴──────────┴──────────┴──────────┴──────────┴──────────╯

//                  ╭──────────┬──────────┬──────────┬──────────┬──────────╮         AUX         ╭──────────┬──────────┬──────────┬──────────┬──────────╮
#define AUX1______    KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,                           KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define AUX2______    _______,   _______,   _______,   SCREEN,    _______,                         KC_MPRV,   KC_VOLD,   KC_VOLU,   KC_MNXT,   KC_F11
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define AUX3______    _______,   _______,   _______,   _______,   _______,                         _______,   KC_MPLY,   KC_MUTE,   _______,   KC_F12
//                  ╰──────────┴──────────┴──────────┼──────────┼──────────┼──────────┬──────────┼──────────┼──────────┼──────────┴──────────┴──────────╯
#define AUX4______                                     _______,   PRESSED,   _______,   _______,   PRESSED,   _______
//                                                   ╰──────────┴──────────┴──────────┴──────────┴──────────┴──────────╯


//                  ╭──────────┬──────────┬──────────┬──────────┬──────────╮       VINORMAL      ╭──────────┬──────────┬──────────┬──────────┬──────────╮
#define VIN1______    BEG_LINE,  WORD_NEXT,  _______,  END_LINE,  _______,                         _______,   _______,   _______,   _______,   _______
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define VIN2______    _______,   _______,   _______,   _______,   _______,                         KC_LEFT,   KC_DOWN,   KC_UP,     KC_RIGHT,  _______
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define VIN3______    _______,   _______,   _______,   _______,  WORD_PREV,                        _______,   _______,   _______,   _______,   _______
//                  ╰──────────┴──────────┴──────────┼──────────┼──────────┼──────────┬──────────┼──────────┼──────────┼──────────┴──────────┴──────────╯
#define VIN4______                                     _______,   _______,   _______,   _______,   _______,   _______
//                                                   ╰──────────┴──────────┴──────────┴──────────┴──────────┴──────────╯


//                  ╭──────────┬──────────┬──────────┬──────────┬──────────╮       TEMPLATE      ╭──────────┬──────────┬──────────┬──────────┬──────────╮
#define TMP1______    _______,   _______,  _______,   _______,   _______,                          _______,   _______,   _______,   _______,   _______
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define TMP2______    _______,   _______,  _______,   _______,   _______,                          _______,   _______,   _______,   _______,   _______
//                  ├──────────┼──────────┼──────────┼──────────┼──────────┤                     ├──────────┼──────────┼──────────┼──────────┼──────────┤
#define TMP3______    _______,   _______,  _______,   _______,   _______,                          _______,   _______,   _______,   _______,   _______
//                  ╰──────────┴──────────┴──────────┼──────────┼──────────┼──────────┬──────────┼──────────┼──────────┼──────────┴──────────┴──────────╯
#define TMP4______                                     _______,   _______,   _______,   _______,   _______,   _______
//                                                   ╰──────────┴──────────┴──────────┴──────────┴──────────┴──────────╯
