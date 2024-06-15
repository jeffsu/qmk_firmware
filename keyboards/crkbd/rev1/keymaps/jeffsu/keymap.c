/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "jeffsu.h"


#define MY_LAYOUT(...) LAYOUT_split_3x5_3(__VA_ARGS__)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = MY_LAYOUT(BASE1_____, BASE2_____, BASE3_____, BASE4_____),
  [_NUM]  = MY_LAYOUT(NUM1______, NUM2______, NUM3______, NUM4______),
  [_SYM]  = MY_LAYOUT(SYM1______, SYM2______, SYM3______, SYM4______),
  [_NAV]  = MY_LAYOUT(NAV1______, NAV2______, NAV3______, NAV4______),
  [_WIN]  = MY_LAYOUT(WIN1______, WIN2______, WIN3______, WIN4______),
  [_SCR]  = MY_LAYOUT(SCR1______, SCR2______, SCR3______, SCR4______),
  [_AUX]  = MY_LAYOUT(AUX1______, AUX2______, AUX3______, AUX4______)
};
