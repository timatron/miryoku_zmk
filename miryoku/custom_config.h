// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_CLIPBOARD_MAC
// #define MIRYOKU_LAYERS_FLIP
#define MIRYOKU_MAPPING_EXTENDED_THUMBS

#define MIRYOKU_LAYOUTMAPPING_BASE(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
&kp ESC  K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  XXX  \
&kp LSHIFT  K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  XXX  \
XXX  K20  K21  K22  K23  K24  XXX  XXX       XXX  XXX  K25  K26  K27  K28  K29  XXX  \
               XXX  XXX  K32  K33  K34       K35  K36  K37  XXX  XXX
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 43 44
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 45 46