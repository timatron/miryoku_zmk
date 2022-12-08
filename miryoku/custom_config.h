// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// #define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_CLIPBOARD_MAC
// #define MIRYOKU_LAYERS_FLIP

// #define MIRYOKU_LAYOUTMAPPING_BASE(\
//      K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
// )\
// &kp ESC  K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  XXX  \
// &kp LSHIFT  K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  &kp BSLH  \
// XXX  K20  K21  K22  K23  K24  XXX  XXX       XXX  XXX  K25  K26  K27  K28  K29  &kp SEMI  \
//                XXX  K32  K33  K34  XXX       XXX  K35  K36  K37  XXX
// #define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 42 43
// #define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 46 47

#define MIRYOKU_LAYOUTMAPPING_BASE(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
XXX  K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  XXX  \
XXX  K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  &kp BSLH  \
XXX  K20  K21  K22  K23  K24  XXX  XXX       XXX  XXX  K25  K26  K27  K28  K29  &kp SEMI  \
               XXX  XXX  K32  K33  K34       K35  &kp SPACE  &kp BSPC  XXX  XXX
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 43 44
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 45 46

// #define MIRYOKU_LAYER_LIST \
// MIRYOKU_X(BASE,   "Base") \
// MIRYOKU_X(EXTRA,  "Extra") \
// MIRYOKU_X(TAP,    "Tap") \
// MIRYOKU_X(BUTTON, "Button") \
// MIRYOKU_X(NAV,    "Nav") \
// MIRYOKU_X(MEDIA,  "Media") \
// MIRYOKU_X(NUM,    "Num") \
// MIRYOKU_X(SYM,    "Sym")

// #define U_BASE   0
// #define U_EXTRA  1
// #define U_TAP    2
// #define U_BUTTON 3
// #define U_NAV    4
// #define U_MEDIA  5
// #define U_NUM    6
// #define U_SYM    7
