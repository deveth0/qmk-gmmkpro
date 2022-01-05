/* Copyright 2021 Jonavin Eng
 * Copyright 2021 Tiago Dias <tiago@tdias.pt>
 * Copyright 2021 Alex Muthmann <amuthmann@dev-eth0.de>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef RGB_MATRIX_ENABLE

// RGB LED locations
enum led_location_map
{
    LED_ESC,       // 0, ESC, K13
    LED_CARET,     // 1, ^, K16
    LED_TAB,       // 2, TAB, K11
    LED_CAPS,      // 3, CAPS, K21
    LED_SH_L,      // 4, SH_L, K00
    LED_CT_L,      // 5, CT_L, K06
    LED_F1,        // 6, F1, K26
    LED_1,         // 7, 1, K17
    LED_Q,         // 8, Q, K10
    LED_A,         // 9, A, K12
    LED_Z,         // 10, Z, K14
    LED_WIN_L,     // 11, WIN_L, K90
    LED_F2,        // 12, F2, K36
    LED_2,         // 13, 2, K27
    LED_W,         // 14, W, K20
    LED_S,         // 15, S, K22
    LED_X,         // 16, X, K24
    LED_ALT_L,     // 17, ALT_L, K93
    LED_F3,        // 18, F3, K31
    LED_3,         // 19, 3, K37
    LED_E,         // 20, E, K30
    LED_D,         // 21, D, K32
    LED_C,         // 22, C, K34
    LED_F4,        // 23, F4, K33
    LED_4,         // 24, 4, K47
    LED_R,         // 25, R, K40
    LED_F,         // 26, F, K42
    LED_V,         // 27, V, K44
    LED_F5,        // 28, F5, K07
    LED_5,         // 29, 5, K46
    LED_T,         // 30, T, K41
    LED_G,         // 31, G, K43
    LED_B,         // 32, B, K45
    LED_SPACE,     // 33, SPACE, K94
    LED_F6,        // 34, F6, K63
    LED_6,         // 35, 6, K56
    LED_Y,         // 36, Y, K51
    LED_H,         // 37, H, K53
    LED_N,         // 38, N, K55
    LED_F7,        // 39, F7, K71
    LED_7,         // 40, 7, K57
    LED_U,         // 41, U, K50
    LED_J,         // 42, J, K52
    LED_M,         // 43, M, K54
    LED_F8,        // 44, F8, K76
    LED_8,         // 45, 8, K67
    LED_I,         // 46, I, K60
    LED_K,         // 47, K, K62
    LED_COMM,      // 48, ,, K64
    LED_ALT_R,     // 49, ALT_R, K95
    LED_F9,        // 50, F9, KA6
    LED_9,         // 51, 9, K77
    LED_O,         // 52, O, K70
    LED_L,         // 53, L, K72
    LED_DOT,       // 54, ., K74
    LED_FN,        // 55, FN, K92
    LED_F10,       // 56, F10, KA7
    LED_0,         // 57, 0, K87
    LED_P,         // 58, P, K80
    LED_SEMICOLON, // 59, ;, K82
    LED_SLSH,      // 60, /, K85
    LED_F11,       // 61, F11, KA3
    LED_MINS,      // 62, -, K86
    LED_LBRC,      // 63, [, K81
    LED_QUOT,      // 64, ", K83
    LED_CT_R,      // 65, CT_R, K04
    LED_F12,       // 66, F12, KA5
    LED_BSLS,      // 67, \, K23
    LED_L1,        // 68, LED, L01
    LED_R1,        // 69, LED, L11
    LED_INS,       // 70, PRT, K97 // remapped PRINT => INS
    LED_L2,        // 71, LED, L02
    LED_R2,        // 72, LED, L12
    LED_DEL,       // 73, DEL, K65
    LED_L3,        // 74, LED, L03
    LED_R3,        // 75, LED, L13
    LED_PGUP,      // 76, PGUP, K15
    LED_L4,        // 77, LED, L04
    LED_R4,        // 78, LED, L14
    LED_EQL,       // 79, =, K66
    LED_RIGHT,     // 80, RIGHT, K05
    LED_L5,        // 81, LED, L05
    LED_R5,        // 82, LED, L15
    LED_END,       // 83, END, K75
    LED_L6,        // 84, LED, L06
    LED_R6,        // 85, LED, L16
    LED_BSPC,      // 86, BSPC, KA1
    LED_PGDN,      // 87, PGDN, K25
    LED_L7,        // 88, LED, L07
    LED_R7,        // 89, LED, L17
    LED_RBRC,      // 90, ], K61
    LED_SH_R,      // 91, SH_R, K91
    LED_L8,        // 92, LED, L08
    LED_R8,        // 93, LED, L18
    LED_UP,        // 94, UP, K35
    LED_HASH,      // 95, #, K84
    LED_LEFT,      // 96, LEFT, K03
    LED_ENTER,     // 97, ENTER, KA4
    LED_DOWN,      // 98, DOWN, K73
};

const uint8_t LED_LIST_WASD[] = {LED_W, LED_A, LED_S, LED_D};

const uint8_t LED_LIST_ARROWS[] = {LED_LEFT, LED_RIGHT, LED_UP, LED_DOWN};

const uint8_t LED_LIST_FUNCROW[] = {LED_ESC, LED_F1, LED_F2, LED_F3, LED_F4, LED_F5, LED_F6, LED_F7, LED_F8, LED_F9, LED_F10, LED_F11, LED_F12, LED_INS};

const uint8_t LED_LIST_NUMROW[] = {LED_CARET, LED_1, LED_2, LED_3, LED_4, LED_5, LED_6, LED_7, LED_8, LED_9, LED_0, LED_MINS, LED_EQL, LED_BSPC, LED_DEL};

const uint8_t LED_LIST_NUMPAD[] = {
    LED_7, LED_8, LED_9, LED_0,
    LED_U, LED_I, LED_O, LED_P, LED_RBRC,
    LED_J, LED_K, LED_L, LED_SEMICOLON,
    LED_M, LED_COMM, LED_DOT, LED_SLSH};

// LEDs on both sides of the keyboard
const uint8_t LED_SIDE_LEFT[] = {LED_L1, LED_L2, LED_L3, LED_L4, LED_L5, LED_L6, LED_L7, LED_L8};
const uint8_t LED_SIDE_RIGHT[] = {LED_R1, LED_R2, LED_R3, LED_R4, LED_R5, LED_R6, LED_R7, LED_R8};

const uint8_t LED_LIST_LETTERS[] = {LED_A, LED_B, LED_C, LED_D, LED_E, LED_F, LED_G, LED_H, LED_I, LED_J, LED_K, LED_L, LED_M, LED_N, LED_O, LED_P, LED_Q, LED_R, LED_S, LED_T, LED_U, LED_V, LED_W, LED_X, LED_Y, LED_Z};

#endif
