/* This file was generated automatically by the Snowball to ISO C compiler */
/* http://snowballstem.org/ */

#include "header.h"

static int r_verb_stem(struct SN_env * z);
static int r_verb_tense_mood(struct SN_env * z);
static int r_verb_number_person(struct SN_env * z);
static int r_noun_plural(struct SN_env * z);
static int r_noun_double_declination(struct SN_env * z);
static int r_noun(struct SN_env * z);
static int r_noun_impersonal_possessive(struct SN_env * z);
static int r_noun_possessive(struct SN_env * z);
#ifdef __cplusplus
extern "C" {
#endif
extern int X_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif


extern struct SN_env * X_create_env(void);
extern void X_close_env(struct SN_env * z);


#ifdef __cplusplus
}
#endif
static const symbol s_0_0[4] = { 0xD1, 0x83, 0xD1, 0x83 };
static const symbol s_0_1[4] = { 0xD1, 0x8B, 0xD1, 0x8B };
static const symbol s_0_2[4] = { 0xD1, 0x8D, 0xD1, 0x8D };
static const symbol s_0_3[4] = { 0xD1, 0x8E, 0xD1, 0x8E };
static const symbol s_0_4[4] = { 0xD1, 0x8F, 0xD1, 0x8F };
static const symbol s_0_5[4] = { 0xD3, 0x99, 0xD3, 0x99 };
static const symbol s_0_6[4] = { 0xD3, 0xA9, 0xD3, 0xA9 };
static const symbol s_0_7[4] = { 0xD2, 0xAF, 0xD2, 0xAF };
static const symbol s_0_8[4] = { 0xD0, 0xB0, 0xD0, 0xB0 };
static const symbol s_0_9[4] = { 0xD0, 0xB5, 0xD0, 0xB5 };
static const symbol s_0_10[4] = { 0xD0, 0xB8, 0xD0, 0xB8 };
static const symbol s_0_11[4] = { 0xD0, 0xBE, 0xD0, 0xBE };

static const struct among a_0[12] =
{
/*  0 */ { 4, s_0_0, -1, 1, 0},
/*  1 */ { 4, s_0_1, -1, 1, 0},
/*  2 */ { 4, s_0_2, -1, 1, 0},
/*  3 */ { 4, s_0_3, -1, 1, 0},
/*  4 */ { 4, s_0_4, -1, 1, 0},
/*  5 */ { 4, s_0_5, -1, 1, 0},
/*  6 */ { 4, s_0_6, -1, 1, 0},
/*  7 */ { 4, s_0_7, -1, 1, 0},
/*  8 */ { 4, s_0_8, -1, 1, 0},
/*  9 */ { 4, s_0_9, -1, 1, 0},
/* 10 */ { 4, s_0_10, -1, 1, 0},
/* 11 */ { 4, s_0_11, -1, 1, 0}
};

static const symbol s_1_0[4] = { 0xD1, 0x83, 0xD1, 0x83 };
static const symbol s_1_1[4] = { 0xD1, 0x8B, 0xD1, 0x8B };
static const symbol s_1_2[4] = { 0xD1, 0x8D, 0xD1, 0x8D };
static const symbol s_1_3[4] = { 0xD1, 0x8E, 0xD1, 0x8E };
static const symbol s_1_4[4] = { 0xD1, 0x8F, 0xD1, 0x8F };
static const symbol s_1_5[4] = { 0xD3, 0x99, 0xD3, 0x99 };
static const symbol s_1_6[4] = { 0xD3, 0xA9, 0xD3, 0xA9 };
static const symbol s_1_7[4] = { 0xD2, 0xAF, 0xD2, 0xAF };
static const symbol s_1_8[4] = { 0xD0, 0xB0, 0xD0, 0xB0 };
static const symbol s_1_9[4] = { 0xD0, 0xB5, 0xD0, 0xB5 };
static const symbol s_1_10[4] = { 0xD0, 0xB8, 0xD0, 0xB8 };
static const symbol s_1_11[4] = { 0xD0, 0xBE, 0xD0, 0xBE };

static const struct among a_1[12] =
{
/*  0 */ { 4, s_1_0, -1, 1, 0},
/*  1 */ { 4, s_1_1, -1, 1, 0},
/*  2 */ { 4, s_1_2, -1, 1, 0},
/*  3 */ { 4, s_1_3, -1, 1, 0},
/*  4 */ { 4, s_1_4, -1, 1, 0},
/*  5 */ { 4, s_1_5, -1, 1, 0},
/*  6 */ { 4, s_1_6, -1, 1, 0},
/*  7 */ { 4, s_1_7, -1, 1, 0},
/*  8 */ { 4, s_1_8, -1, 1, 0},
/*  9 */ { 4, s_1_9, -1, 1, 0},
/* 10 */ { 4, s_1_10, -1, 1, 0},
/* 11 */ { 4, s_1_11, -1, 1, 0}
};

static const symbol s_2_0[4] = { 0xD1, 0x83, 0xD1, 0x83 };
static const symbol s_2_1[4] = { 0xD1, 0x8B, 0xD1, 0x8B };
static const symbol s_2_2[4] = { 0xD1, 0x8D, 0xD1, 0x8D };
static const symbol s_2_3[4] = { 0xD1, 0x8E, 0xD1, 0x8E };
static const symbol s_2_4[4] = { 0xD1, 0x8F, 0xD1, 0x8F };
static const symbol s_2_5[4] = { 0xD3, 0x99, 0xD3, 0x99 };
static const symbol s_2_6[4] = { 0xD3, 0xA9, 0xD3, 0xA9 };
static const symbol s_2_7[4] = { 0xD2, 0xAF, 0xD2, 0xAF };
static const symbol s_2_8[4] = { 0xD0, 0xB0, 0xD0, 0xB0 };
static const symbol s_2_9[4] = { 0xD0, 0xB5, 0xD0, 0xB5 };
static const symbol s_2_10[4] = { 0xD0, 0xB8, 0xD0, 0xB8 };
static const symbol s_2_11[4] = { 0xD0, 0xBE, 0xD0, 0xBE };

static const struct among a_2[12] =
{
/*  0 */ { 4, s_2_0, -1, 1, 0},
/*  1 */ { 4, s_2_1, -1, 1, 0},
/*  2 */ { 4, s_2_2, -1, 1, 0},
/*  3 */ { 4, s_2_3, -1, 1, 0},
/*  4 */ { 4, s_2_4, -1, 1, 0},
/*  5 */ { 4, s_2_5, -1, 1, 0},
/*  6 */ { 4, s_2_6, -1, 1, 0},
/*  7 */ { 4, s_2_7, -1, 1, 0},
/*  8 */ { 4, s_2_8, -1, 1, 0},
/*  9 */ { 4, s_2_9, -1, 1, 0},
/* 10 */ { 4, s_2_10, -1, 1, 0},
/* 11 */ { 4, s_2_11, -1, 1, 0}
};

static const symbol s_3_0[4] = { 0xD1, 0x83, 0xD1, 0x83 };
static const symbol s_3_1[4] = { 0xD1, 0x8B, 0xD1, 0x8B };
static const symbol s_3_2[4] = { 0xD1, 0x8D, 0xD1, 0x8D };
static const symbol s_3_3[4] = { 0xD1, 0x8E, 0xD1, 0x8E };
static const symbol s_3_4[4] = { 0xD1, 0x8F, 0xD1, 0x8F };
static const symbol s_3_5[4] = { 0xD3, 0x99, 0xD3, 0x99 };
static const symbol s_3_6[4] = { 0xD3, 0xA9, 0xD3, 0xA9 };
static const symbol s_3_7[4] = { 0xD2, 0xAF, 0xD2, 0xAF };
static const symbol s_3_8[4] = { 0xD0, 0xB0, 0xD0, 0xB0 };
static const symbol s_3_9[4] = { 0xD0, 0xB5, 0xD0, 0xB5 };
static const symbol s_3_10[4] = { 0xD0, 0xB8, 0xD0, 0xB8 };
static const symbol s_3_11[4] = { 0xD0, 0xBE, 0xD0, 0xBE };

static const struct among a_3[12] =
{
/*  0 */ { 4, s_3_0, -1, 1, 0},
/*  1 */ { 4, s_3_1, -1, 1, 0},
/*  2 */ { 4, s_3_2, -1, 1, 0},
/*  3 */ { 4, s_3_3, -1, 1, 0},
/*  4 */ { 4, s_3_4, -1, 1, 0},
/*  5 */ { 4, s_3_5, -1, 1, 0},
/*  6 */ { 4, s_3_6, -1, 1, 0},
/*  7 */ { 4, s_3_7, -1, 1, 0},
/*  8 */ { 4, s_3_8, -1, 1, 0},
/*  9 */ { 4, s_3_9, -1, 1, 0},
/* 10 */ { 4, s_3_10, -1, 1, 0},
/* 11 */ { 4, s_3_11, -1, 1, 0}
};

static const symbol s_4_0[4] = { 0xD0, 0xB3, 0xD1, 0x83 };
static const symbol s_4_1[6] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD1, 0x83 };
static const symbol s_4_2[4] = { 0xD0, 0xBA, 0xD1, 0x83 };
static const symbol s_4_3[4] = { 0xD0, 0xBC, 0xD1, 0x83 };
static const symbol s_4_4[4] = { 0xD0, 0xB3, 0xD2, 0xAF };
static const symbol s_4_5[6] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD2, 0xAF };
static const symbol s_4_6[4] = { 0xD0, 0xBA, 0xD2, 0xAF };
static const symbol s_4_7[4] = { 0xD0, 0xBC, 0xD2, 0xAF };

static const struct among a_4[8] =
{
/*  0 */ { 4, s_4_0, -1, -1, 0},
/*  1 */ { 6, s_4_1, 0, -1, 0},
/*  2 */ { 4, s_4_2, -1, -1, 0},
/*  3 */ { 4, s_4_3, -1, -1, 0},
/*  4 */ { 4, s_4_4, -1, -1, 0},
/*  5 */ { 6, s_4_5, 4, -1, 0},
/*  6 */ { 4, s_4_6, -1, -1, 0},
/*  7 */ { 4, s_4_7, -1, -1, 0}
};

static const symbol s_5_0[4] = { 0xD1, 0x83, 0xD1, 0x83 };
static const symbol s_5_1[4] = { 0xD1, 0x8B, 0xD1, 0x8B };
static const symbol s_5_2[4] = { 0xD1, 0x8D, 0xD1, 0x8D };
static const symbol s_5_3[4] = { 0xD1, 0x8E, 0xD1, 0x8E };
static const symbol s_5_4[4] = { 0xD1, 0x8F, 0xD1, 0x8F };
static const symbol s_5_5[4] = { 0xD3, 0x99, 0xD3, 0x99 };
static const symbol s_5_6[4] = { 0xD3, 0xA9, 0xD3, 0xA9 };
static const symbol s_5_7[4] = { 0xD2, 0xAF, 0xD2, 0xAF };
static const symbol s_5_8[4] = { 0xD0, 0xB0, 0xD0, 0xB0 };
static const symbol s_5_9[4] = { 0xD0, 0xB5, 0xD0, 0xB5 };
static const symbol s_5_10[4] = { 0xD0, 0xB8, 0xD0, 0xB8 };
static const symbol s_5_11[4] = { 0xD0, 0xBE, 0xD0, 0xBE };

static const struct among a_5[12] =
{
/*  0 */ { 4, s_5_0, -1, 1, 0},
/*  1 */ { 4, s_5_1, -1, 1, 0},
/*  2 */ { 4, s_5_2, -1, 1, 0},
/*  3 */ { 4, s_5_3, -1, 1, 0},
/*  4 */ { 4, s_5_4, -1, 1, 0},
/*  5 */ { 4, s_5_5, -1, 1, 0},
/*  6 */ { 4, s_5_6, -1, 1, 0},
/*  7 */ { 4, s_5_7, -1, 1, 0},
/*  8 */ { 4, s_5_8, -1, 1, 0},
/*  9 */ { 4, s_5_9, -1, 1, 0},
/* 10 */ { 4, s_5_10, -1, 1, 0},
/* 11 */ { 4, s_5_11, -1, 1, 0}
};

static const symbol s_6_0[4] = { 0xD1, 0x83, 0xD1, 0x80 };
static const symbol s_6_1[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD1, 0x83, 0xD1, 0x80 };
static const symbol s_6_2[6] = { 0xD2, 0xBB, 0xD1, 0x83, 0xD1, 0x80 };
static const symbol s_6_3[4] = { 0xD3, 0x99, 0xD1, 0x80 };
static const symbol s_6_4[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD3, 0x99, 0xD1, 0x80 };
static const symbol s_6_5[6] = { 0xD2, 0xBB, 0xD3, 0x99, 0xD1, 0x80 };
static const symbol s_6_6[4] = { 0xD2, 0xAF, 0xD1, 0x80 };
static const symbol s_6_7[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD2, 0xAF, 0xD1, 0x80 };
static const symbol s_6_8[6] = { 0xD2, 0xBB, 0xD2, 0xAF, 0xD1, 0x80 };
static const symbol s_6_9[4] = { 0xD0, 0xB0, 0xD1, 0x80 };
static const symbol s_6_10[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD0, 0xB0, 0xD1, 0x80 };
static const symbol s_6_11[6] = { 0xD2, 0xBB, 0xD0, 0xB0, 0xD1, 0x80 };
static const symbol s_6_12[4] = { 0xD3, 0x99, 0xD1, 0x81 };
static const symbol s_6_13[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD3, 0x99, 0xD1, 0x81 };
static const symbol s_6_14[6] = { 0xD2, 0xBB, 0xD3, 0x99, 0xD1, 0x81 };
static const symbol s_6_15[4] = { 0xD0, 0xB0, 0xD1, 0x81 };
static const symbol s_6_16[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD0, 0xB0, 0xD1, 0x81 };
static const symbol s_6_17[6] = { 0xD2, 0xBB, 0xD0, 0xB0, 0xD1, 0x81 };
static const symbol s_6_18[2] = { 0xD1, 0x82 };
static const symbol s_6_19[4] = { 0xD1, 0x82, 0xD3, 0x99 };
static const symbol s_6_20[4] = { 0xD0, 0xBB, 0xD3, 0x99 };
static const symbol s_6_21[4] = { 0xD0, 0xBD, 0xD3, 0x99 };
static const symbol s_6_22[4] = { 0xD1, 0x82, 0xD0, 0xB0 };
static const symbol s_6_23[4] = { 0xD0, 0xBB, 0xD0, 0xB0 };
static const symbol s_6_24[4] = { 0xD0, 0xBD, 0xD0, 0xB0 };
static const symbol s_6_25[2] = { 0xD0, 0xB3 };
static const symbol s_6_26[4] = { 0xD1, 0x8B, 0xD0, 0xB3 };
static const symbol s_6_27[4] = { 0xD0, 0xB8, 0xD0, 0xB3 };
static const symbol s_6_28[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD0, 0xB8, 0xD0, 0xB3 };
static const symbol s_6_29[2] = { 0xD0, 0xB4 };
static const symbol s_6_30[2] = { 0xD0, 0xBD };
static const symbol s_6_31[4] = { 0xD1, 0x8B, 0xD0, 0xBD };
static const symbol s_6_32[4] = { 0xD0, 0xB8, 0xD0, 0xBD };
static const symbol s_6_33[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD0, 0xB8, 0xD0, 0xBD };
static const symbol s_6_34[6] = { 0xD2, 0xBB, 0xD0, 0xB8, 0xD0, 0xBD };

static const struct among a_6[35] =
{
/*  0 */ { 4, s_6_0, -1, 12, 0},
/*  1 */ { 8, s_6_1, 0, 10, 0},
/*  2 */ { 6, s_6_2, 0, 11, 0},
/*  3 */ { 4, s_6_3, -1, 12, 0},
/*  4 */ { 8, s_6_4, 3, 6, 0},
/*  5 */ { 6, s_6_5, 3, 7, 0},
/*  6 */ { 4, s_6_6, -1, 12, 0},
/*  7 */ { 8, s_6_7, 6, 10, 0},
/*  8 */ { 6, s_6_8, 6, 11, 0},
/*  9 */ { 4, s_6_9, -1, 12, 0},
/* 10 */ { 8, s_6_10, 9, 6, 0},
/* 11 */ { 6, s_6_11, 9, 7, 0},
/* 12 */ { 4, s_6_12, -1, 12, 0},
/* 13 */ { 8, s_6_13, 12, 8, 0},
/* 14 */ { 6, s_6_14, 12, 9, 0},
/* 15 */ { 4, s_6_15, -1, 12, 0},
/* 16 */ { 8, s_6_16, 15, 8, 0},
/* 17 */ { 6, s_6_17, 15, 9, 0},
/* 18 */ { 2, s_6_18, -1, 12, 0},
/* 19 */ { 4, s_6_19, -1, 12, 0},
/* 20 */ { 4, s_6_20, -1, 12, 0},
/* 21 */ { 4, s_6_21, -1, 2, 0},
/* 22 */ { 4, s_6_22, -1, 12, 0},
/* 23 */ { 4, s_6_23, -1, 12, 0},
/* 24 */ { 4, s_6_24, -1, 1, 0},
/* 25 */ { 2, s_6_25, -1, 15, 0},
/* 26 */ { 4, s_6_26, 25, 12, 0},
/* 27 */ { 4, s_6_27, 25, 12, 0},
/* 28 */ { 8, s_6_28, 27, 5, 0},
/* 29 */ { 2, s_6_29, -1, 13, 0},
/* 30 */ { 2, s_6_30, -1, 14, 0},
/* 31 */ { 4, s_6_31, 30, 12, 0},
/* 32 */ { 4, s_6_32, 30, 12, 0},
/* 33 */ { 8, s_6_33, 32, 3, 0},
/* 34 */ { 6, s_6_34, 32, 4, 0}
};

static const symbol s_7_0[4] = { 0xD0, 0xBD, 0xD1, 0x80 };
static const symbol s_7_1[2] = { 0xD1, 0x81 };
static const symbol s_7_2[4] = { 0xD1, 0x83, 0xD0, 0xB4 };
static const symbol s_7_3[6] = { 0xD0, 0xB3, 0xD1, 0x83, 0xD0, 0xB4 };
static const symbol s_7_4[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD1, 0x83, 0xD0, 0xB4 };
static const symbol s_7_5[6] = { 0xD0, 0xBA, 0xD1, 0x83, 0xD0, 0xB4 };
static const symbol s_7_6[6] = { 0xD0, 0xBC, 0xD1, 0x83, 0xD0, 0xB4 };
static const symbol s_7_7[4] = { 0xD2, 0xAF, 0xD0, 0xB4 };
static const symbol s_7_8[6] = { 0xD0, 0xB3, 0xD2, 0xAF, 0xD0, 0xB4 };
static const symbol s_7_9[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD2, 0xAF, 0xD0, 0xB4 };
static const symbol s_7_10[6] = { 0xD0, 0xBA, 0xD2, 0xAF, 0xD0, 0xB4 };
static const symbol s_7_11[6] = { 0xD0, 0xBC, 0xD2, 0xAF, 0xD0, 0xB4 };

static const struct among a_7[12] =
{
/*  0 */ { 4, s_7_0, -1, 4, 0},
/*  1 */ { 2, s_7_1, -1, 4, 0},
/*  2 */ { 4, s_7_2, -1, 4, 0},
/*  3 */ { 6, s_7_3, 2, 2, 0},
/*  4 */ { 8, s_7_4, 3, 1, 0},
/*  5 */ { 6, s_7_5, 2, 3, 0},
/*  6 */ { 6, s_7_6, 2, 4, 0},
/*  7 */ { 4, s_7_7, -1, 4, 0},
/*  8 */ { 6, s_7_8, 7, 2, 0},
/*  9 */ { 8, s_7_9, 8, 1, 0},
/* 10 */ { 6, s_7_10, 7, 3, 0},
/* 11 */ { 6, s_7_11, 7, 4, 0}
};

static const symbol s_8_0[4] = { 0xD1, 0x8B, 0xD0, 0xBD };
static const symbol s_8_1[4] = { 0xD3, 0x99, 0xD0, 0xBD };
static const symbol s_8_2[4] = { 0xD0, 0xB0, 0xD0, 0xBD };
static const symbol s_8_3[4] = { 0xD0, 0xB8, 0xD0, 0xBD };

static const struct among a_8[4] =
{
/*  0 */ { 4, s_8_0, -1, -1, 0},
/*  1 */ { 4, s_8_1, -1, -1, 0},
/*  2 */ { 4, s_8_2, -1, -1, 0},
/*  3 */ { 4, s_8_3, -1, -1, 0}
};

static const symbol s_9_0[4] = { 0xD0, 0xBD, 0xD1, 0x8C };
static const symbol s_9_1[2] = { 0xD0, 0xBC };
static const symbol s_9_2[4] = { 0xD1, 0x82, 0xD0, 0xBD };
static const symbol s_9_3[4] = { 0xD1, 0x87, 0xD0, 0xBD };
static const symbol s_9_4[6] = { 0xD0, 0xBC, 0xD0, 0xB4, 0xD0, 0xBD };

static const struct among a_9[5] =
{
/*  0 */ { 4, s_9_0, -1, 1, 0},
/*  1 */ { 2, s_9_1, -1, 2, 0},
/*  2 */ { 4, s_9_2, -1, 2, 0},
/*  3 */ { 4, s_9_3, -1, 2, 0},
/*  4 */ { 6, s_9_4, -1, 2, 0}
};

static const symbol s_10_0[2] = { 0xD1, 0x8B };
static const symbol s_10_1[2] = { 0xD3, 0x99 };
static const symbol s_10_2[2] = { 0xD0, 0xB0 };
static const symbol s_10_3[2] = { 0xD0, 0xB8 };

static const struct among a_10[4] =
{
/*  0 */ { 2, s_10_0, -1, 2, 0},
/*  1 */ { 2, s_10_1, -1, 1, 0},
/*  2 */ { 2, s_10_2, -1, 1, 0},
/*  3 */ { 2, s_10_3, -1, 2, 0}
};

static const symbol s_11_0[2] = { 0xD1, 0x83 };
static const symbol s_11_1[2] = { 0xD3, 0x99 };
static const symbol s_11_2[4] = { 0xD0, 0xBB, 0xD3, 0x99 };
static const symbol s_11_3[2] = { 0xD2, 0xAF };
static const symbol s_11_4[2] = { 0xD0, 0xB0 };
static const symbol s_11_5[4] = { 0xD0, 0xBB, 0xD0, 0xB0 };

static const struct among a_11[6] =
{
/*  0 */ { 2, s_11_0, -1, 2, 0},
/*  1 */ { 2, s_11_1, -1, 2, 0},
/*  2 */ { 4, s_11_2, 1, 1, 0},
/*  3 */ { 2, s_11_3, -1, 2, 0},
/*  4 */ { 2, s_11_4, -1, 2, 0},
/*  5 */ { 4, s_11_5, 4, 1, 0}
};

static const symbol s_12_0[6] = { 0xD0, 0xBD, 0xD0, 0xBD, 0xD1, 0x8C };
static const symbol s_12_1[4] = { 0xD1, 0x80, 0xD0, 0xBD };
static const symbol s_12_2[6] = { 0xD3, 0x99, 0xD1, 0x81, 0xD0, 0xBD };
static const symbol s_12_3[6] = { 0xD0, 0xB0, 0xD1, 0x81, 0xD0, 0xBD };
static const symbol s_12_4[4] = { 0xD3, 0x99, 0xD0, 0xBD };
static const symbol s_12_5[4] = { 0xD0, 0xB0, 0xD0, 0xBD };

static const struct among a_12[6] =
{
/*  0 */ { 6, s_12_0, -1, 1, 0},
/*  1 */ { 4, s_12_1, -1, 3, 0},
/*  2 */ { 6, s_12_2, -1, 5, 0},
/*  3 */ { 6, s_12_3, -1, 4, 0},
/*  4 */ { 4, s_12_4, -1, 2, 0},
/*  5 */ { 4, s_12_5, -1, 2, 0}
};

static const symbol s_13_0[4] = { 0xD1, 0x83, 0xD1, 0x83 };
static const symbol s_13_1[4] = { 0xD1, 0x8B, 0xD1, 0x8B };
static const symbol s_13_2[4] = { 0xD1, 0x8D, 0xD1, 0x8D };
static const symbol s_13_3[4] = { 0xD1, 0x8E, 0xD1, 0x8E };
static const symbol s_13_4[4] = { 0xD1, 0x8F, 0xD1, 0x8F };
static const symbol s_13_5[4] = { 0xD3, 0x99, 0xD3, 0x99 };
static const symbol s_13_6[4] = { 0xD3, 0xA9, 0xD3, 0xA9 };
static const symbol s_13_7[4] = { 0xD2, 0xAF, 0xD2, 0xAF };
static const symbol s_13_8[4] = { 0xD0, 0xB0, 0xD0, 0xB0 };
static const symbol s_13_9[4] = { 0xD0, 0xB5, 0xD0, 0xB5 };
static const symbol s_13_10[4] = { 0xD0, 0xB8, 0xD0, 0xB8 };
static const symbol s_13_11[4] = { 0xD0, 0xBE, 0xD0, 0xBE };

static const struct among a_13[12] =
{
/*  0 */ { 4, s_13_0, -1, 1, 0},
/*  1 */ { 4, s_13_1, -1, 1, 0},
/*  2 */ { 4, s_13_2, -1, 1, 0},
/*  3 */ { 4, s_13_3, -1, 1, 0},
/*  4 */ { 4, s_13_4, -1, 1, 0},
/*  5 */ { 4, s_13_5, -1, 1, 0},
/*  6 */ { 4, s_13_6, -1, 1, 0},
/*  7 */ { 4, s_13_7, -1, 1, 0},
/*  8 */ { 4, s_13_8, -1, 1, 0},
/*  9 */ { 4, s_13_9, -1, 1, 0},
/* 10 */ { 4, s_13_10, -1, 1, 0},
/* 11 */ { 4, s_13_11, -1, 1, 0}
};

static const symbol s_14_0[4] = { 0xD1, 0x82, 0xD3, 0x99 };
static const symbol s_14_1[4] = { 0xD0, 0xBD, 0xD3, 0x99 };
static const symbol s_14_2[4] = { 0xD1, 0x82, 0xD0, 0xB0 };
static const symbol s_14_3[4] = { 0xD0, 0xBD, 0xD0, 0xB0 };
static const symbol s_14_4[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD0, 0xB8, 0xD0, 0xBD };
static const symbol s_14_5[6] = { 0xD2, 0xBB, 0xD0, 0xB8, 0xD0, 0xBD };

static const struct among a_14[6] =
{
/*  0 */ { 4, s_14_0, -1, 5, 0},
/*  1 */ { 4, s_14_1, -1, 2, 0},
/*  2 */ { 4, s_14_2, -1, 5, 0},
/*  3 */ { 4, s_14_3, -1, 1, 0},
/*  4 */ { 8, s_14_4, -1, 3, 0},
/*  5 */ { 6, s_14_5, -1, 4, 0}
};

static const symbol s_15_0[2] = { 0xD1, 0x83 };
static const symbol s_15_1[2] = { 0xD2, 0xAF };

static const struct among a_15[2] =
{
/*  0 */ { 2, s_15_0, -1, 1, 0},
/*  1 */ { 2, s_15_1, -1, 1, 0}
};

static const symbol s_16_0[2] = { 0xD1, 0x82 };
static const symbol s_16_1[2] = { 0xD1, 0x87 };
static const symbol s_16_2[2] = { 0xD0, 0xB2 };
static const symbol s_16_3[8] = { 0xD0, 0xB2, 0xD0, 0xB8, 0xD0, 0xB4, 0xD0, 0xBD };

static const struct among a_16[4] =
{
/*  0 */ { 2, s_16_0, -1, 2, 0},
/*  1 */ { 2, s_16_1, -1, 2, 0},
/*  2 */ { 2, s_16_2, -1, 1, 0},
/*  3 */ { 8, s_16_3, -1, 1, 0}
};

static const symbol s_17_0[2] = { 0xD1, 0x81 };
static const symbol s_17_1[4] = { 0xD1, 0x81, 0xD1, 0x83 };
static const symbol s_17_2[2] = { 0xD1, 0x87 };
static const symbol s_17_3[4] = { 0xD0, 0xB8, 0xD1, 0x8F };
static const symbol s_17_4[2] = { 0xD2, 0x97 };
static const symbol s_17_5[2] = { 0xD3, 0x99 };
static const symbol s_17_6[4] = { 0xD1, 0x81, 0xD3, 0x99 };
static const symbol s_17_7[6] = { 0xD1, 0x82, 0xD1, 0x85, 0xD3, 0x99 };
static const symbol s_17_8[6] = { 0xD0, 0xB2, 0xD0, 0xB7, 0xD3, 0x99 };
static const symbol s_17_9[4] = { 0xD0, 0xBB, 0xD3, 0x99 };
static const symbol s_17_10[4] = { 0xD0, 0xBD, 0xD3, 0x99 };
static const symbol s_17_11[8] = { 0xD2, 0x97, 0xD3, 0x99, 0xD0, 0xBD, 0xD3, 0x99 };
static const symbol s_17_12[4] = { 0xD1, 0x81, 0xD2, 0xAF };
static const symbol s_17_13[2] = { 0xD0, 0xB0 };
static const symbol s_17_14[4] = { 0xD1, 0x81, 0xD0, 0xB0 };
static const symbol s_17_15[6] = { 0xD1, 0x82, 0xD1, 0x85, 0xD0, 0xB0 };
static const symbol s_17_16[6] = { 0xD0, 0xB2, 0xD0, 0xB7, 0xD0, 0xB0 };
static const symbol s_17_17[4] = { 0xD0, 0xBB, 0xD0, 0xB0 };
static const symbol s_17_18[4] = { 0xD0, 0xBD, 0xD0, 0xB0 };
static const symbol s_17_19[8] = { 0xD1, 0x87, 0xD0, 0xB0, 0xD0, 0xBD, 0xD0, 0xB0 };
static const symbol s_17_20[8] = { 0xD2, 0x97, 0xD0, 0xB0, 0xD0, 0xBD, 0xD0, 0xB0 };
static const symbol s_17_21[2] = { 0xD0, 0xB2 };
static const symbol s_17_22[2] = { 0xD0, 0xB3 };
static const symbol s_17_23[2] = { 0xD0, 0xB9 };
static const symbol s_17_24[4] = { 0xD0, 0xB8, 0xD0, 0xB9 };
static const symbol s_17_25[4] = { 0xD1, 0x81, 0xD0, 0xBD };
static const symbol s_17_26[4] = { 0xD1, 0x82, 0xD0, 0xBD };
static const symbol s_17_27[6] = { 0xD1, 0x81, 0xD0, 0xBC, 0xD0, 0xBD };

static const struct among a_17[28] =
{
/*  0 */ { 2, s_17_0, -1, 2, 0},
/*  1 */ { 4, s_17_1, -1, 2, 0},
/*  2 */ { 2, s_17_2, -1, 1, 0},
/*  3 */ { 4, s_17_3, -1, 2, 0},
/*  4 */ { 2, s_17_4, -1, 1, 0},
/*  5 */ { 2, s_17_5, -1, 1, 0},
/*  6 */ { 4, s_17_6, 5, 2, 0},
/*  7 */ { 6, s_17_7, 5, 2, 0},
/*  8 */ { 6, s_17_8, 5, 2, 0},
/*  9 */ { 4, s_17_9, 5, 1, 0},
/* 10 */ { 4, s_17_10, 5, 1, 0},
/* 11 */ { 8, s_17_11, 10, 1, 0},
/* 12 */ { 4, s_17_12, -1, 2, 0},
/* 13 */ { 2, s_17_13, -1, 1, 0},
/* 14 */ { 4, s_17_14, 13, 2, 0},
/* 15 */ { 6, s_17_15, 13, 2, 0},
/* 16 */ { 6, s_17_16, 13, 2, 0},
/* 17 */ { 4, s_17_17, 13, 1, 0},
/* 18 */ { 4, s_17_18, 13, 1, 0},
/* 19 */ { 8, s_17_19, 18, 1, 0},
/* 20 */ { 8, s_17_20, 18, 1, 0},
/* 21 */ { 2, s_17_21, -1, 1, 0},
/* 22 */ { 2, s_17_22, -1, 2, 0},
/* 23 */ { 2, s_17_23, -1, 2, 0},
/* 24 */ { 4, s_17_24, 23, 2, 0},
/* 25 */ { 4, s_17_25, -1, 1, 0},
/* 26 */ { 4, s_17_26, -1, 2, 0},
/* 27 */ { 6, s_17_27, -1, 1, 0}
};

static const symbol s_18_0[4] = { 0xD0, 0xB4, 0xD1, 0x85 };
static const symbol s_18_1[4] = { 0xD0, 0xBB, 0xD1, 0x86 };
static const symbol s_18_2[2] = { 0xD3, 0x99 };
static const symbol s_18_3[6] = { 0xD1, 0x86, 0xD1, 0x85, 0xD3, 0x99 };
static const symbol s_18_4[4] = { 0xD2, 0x97, 0xD3, 0x99 };
static const symbol s_18_5[2] = { 0xD0, 0xB0 };
static const symbol s_18_6[6] = { 0xD1, 0x86, 0xD1, 0x85, 0xD0, 0xB0 };
static const symbol s_18_7[4] = { 0xD2, 0x97, 0xD0, 0xB0 };
static const symbol s_18_8[4] = { 0xD1, 0x80, 0xD0, 0xB3 };
static const symbol s_18_9[4] = { 0xD0, 0xB3, 0xD0, 0xB4 };
static const symbol s_18_10[4] = { 0xD0, 0xBB, 0xD0, 0xB4 };
static const symbol s_18_11[4] = { 0xD1, 0x81, 0xD0, 0xBA };
static const symbol s_18_12[4] = { 0xD1, 0x87, 0xD0, 0xBA };
static const symbol s_18_13[4] = { 0xD1, 0x83, 0xD0, 0xBB };
static const symbol s_18_14[4] = { 0xD2, 0xAF, 0xD0, 0xBB };
static const symbol s_18_15[4] = { 0xD0, 0xBB, 0xD2, 0xBB };

static const struct among a_18[16] =
{
/*  0 */ { 4, s_18_0, -1, 3, 0},
/*  1 */ { 4, s_18_1, -1, 1, 0},
/*  2 */ { 2, s_18_2, -1, 1, 0},
/*  3 */ { 6, s_18_3, 2, 1, 0},
/*  4 */ { 4, s_18_4, 2, 1, 0},
/*  5 */ { 2, s_18_5, -1, 1, 0},
/*  6 */ { 6, s_18_6, 5, 1, 0},
/*  7 */ { 4, s_18_7, 5, 1, 0},
/*  8 */ { 4, s_18_8, -1, 2, 0},
/*  9 */ { 4, s_18_9, -1, 1, 0},
/* 10 */ { 4, s_18_10, -1, 1, 0},
/* 11 */ { 4, s_18_11, -1, 4, 0},
/* 12 */ { 4, s_18_12, -1, 1, 0},
/* 13 */ { 4, s_18_13, -1, 1, 0},
/* 14 */ { 4, s_18_14, -1, 1, 0},
/* 15 */ { 4, s_18_15, -1, 1, 0}
};

static const unsigned char g_vowel[] = { 33, 65, 8, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 2, 0, 2 };

static const symbol s_0[] = { 0xD0, 0xBD };
static const symbol s_1[] = { 0xD0, 0xBD };
static const symbol s_2[] = { 0xD2, 0xA3 };
static const symbol s_3[] = { 0xD2, 0xA3 };
static const symbol s_4[] = { 0xD2, 0xA3 };
static const symbol s_5[] = { 0xD2, 0xA3 };
static const symbol s_6[] = { 0xD2, 0xA3 };
static const symbol s_7[] = { 0xD2, 0xA3 };
static const symbol s_8[] = { 0xD0, 0xB3 };
static const symbol s_9[] = { 0xD0, 0xBA };
static const symbol s_10[] = { 0xD0, 0xBD };
static const symbol s_11[] = { 0xD2, 0xBB };
static const symbol s_12[] = { 0xD1, 0x80 };
static const symbol s_13[] = { 0xD0, 0xB0, 0xD1, 0x81 };
static const symbol s_14[] = { 0xD3, 0x99, 0xD1, 0x81 };
static const symbol s_15[] = { 0xD0, 0xBD };
static const symbol s_16[] = { 0xD0, 0xBD };
static const symbol s_17[] = { 0xD2, 0xA3 };
static const symbol s_18[] = { 0xD1, 0x80 };
static const symbol s_19[] = { 0xD0, 0xB4 };
static const symbol s_20[] = { 0xD1, 0x81 };

static int r_noun(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 82 */
    among_var = find_among_b(z, a_6, 35); /* substring, line 82 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 82 */
    switch (among_var) { /* among, line 82 */
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 2, s_0); /* <-, line 83 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_1); /* <-, line 84 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 2, s_2); /* <-, line 86 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int m_test1 = z->l - z->c; /* test, line 89 */
                if (in_grouping_b_U(z, g_vowel, 1072, 1257, 0)) return 0; /* grouping vowel, line 89 */
                z->c = z->l - m_test1;
            }
            {   int ret = slice_del(z); /* delete, line 89 */
                if (ret < 0) return ret;
            }
            {   int m_test2 = z->l - z->c; /* test, line 90 */
                among_var = find_among_b(z, a_0, 12); /* substring, line 90 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test2;
            }
            switch (among_var) { /* among, line 90 */
                case 0: return 0;
                case 1:
                    z->ket = z->c; /* [, line 91 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 91 */
                    }
                    z->bra = z->c; /* ], line 91 */
                    {   int ret = slice_del(z); /* delete, line 91 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 2, s_3); /* <-, line 95 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 2, s_4); /* <-, line 99 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int m_test3 = z->l - z->c; /* test, line 101 */
                if (in_grouping_b_U(z, g_vowel, 1072, 1257, 0)) return 0; /* grouping vowel, line 101 */
                z->c = z->l - m_test3;
            }
            {   int ret = slice_del(z); /* delete, line 101 */
                if (ret < 0) return ret;
            }
            {   int m_test4 = z->l - z->c; /* test, line 102 */
                among_var = find_among_b(z, a_1, 12); /* substring, line 102 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test4;
            }
            switch (among_var) { /* among, line 102 */
                case 0: return 0;
                case 1:
                    z->ket = z->c; /* [, line 103 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 103 */
                    }
                    z->bra = z->c; /* ], line 103 */
                    {   int ret = slice_del(z); /* delete, line 103 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 2, s_5); /* <-, line 107 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int m_test5 = z->l - z->c; /* test, line 109 */
                if (in_grouping_b_U(z, g_vowel, 1072, 1257, 0)) return 0; /* grouping vowel, line 109 */
                z->c = z->l - m_test5;
            }
            {   int ret = slice_del(z); /* delete, line 109 */
                if (ret < 0) return ret;
            }
            {   int m_test6 = z->l - z->c; /* test, line 110 */
                among_var = find_among_b(z, a_2, 12); /* substring, line 110 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test6;
            }
            switch (among_var) { /* among, line 110 */
                case 0: return 0;
                case 1:
                    z->ket = z->c; /* [, line 111 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 111 */
                    }
                    z->bra = z->c; /* ], line 111 */
                    {   int ret = slice_del(z); /* delete, line 111 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 10:
            {   int ret = slice_from_s(z, 2, s_6); /* <-, line 116 */
                if (ret < 0) return ret;
            }
            break;
        case 11:
            {   int m_test7 = z->l - z->c; /* test, line 118 */
                if (in_grouping_b_U(z, g_vowel, 1072, 1257, 0)) return 0; /* grouping vowel, line 118 */
                z->c = z->l - m_test7;
            }
            {   int ret = slice_del(z); /* delete, line 118 */
                if (ret < 0) return ret;
            }
            {   int m_test8 = z->l - z->c; /* test, line 119 */
                among_var = find_among_b(z, a_3, 12); /* substring, line 119 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test8;
            }
            switch (among_var) { /* among, line 119 */
                case 0: return 0;
                case 1:
                    z->ket = z->c; /* [, line 120 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 120 */
                    }
                    z->bra = z->c; /* ], line 120 */
                    {   int ret = slice_del(z); /* delete, line 120 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 12:
            {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 2); /* hop, line 126 */
                if (ret < 0) return 0;
                z->c = ret;
            }
            {   int ret = slice_del(z); /* delete, line 126 */
                if (ret < 0) return ret;
            }
            break;
        case 13:
            {   int m_test9 = z->l - z->c; /* test, line 128 */
                {   int m10 = z->l - z->c; (void)m10; /* not, line 128 */
                    if (z->c - 3 <= z->lb || (z->p[z->c - 1] != 131 && z->p[z->c - 1] != 175)) goto lab0; /* substring, line 128 */
                    if (!(find_among_b(z, a_4, 8))) goto lab0;
                    return 0;
                lab0:
                    z->c = z->l - m10;
                }
                z->c = z->l - m_test9;
            }
            {   int ret = slice_del(z); /* delete, line 132 */
                if (ret < 0) return ret;
            }
            break;
        case 14:
            {   int m_test11 = z->l - z->c; /* test, line 134 */
                {   int m12 = z->l - z->c; (void)m12; /* and, line 134 */
                    if (in_grouping_b_U(z, g_vowel, 1072, 1257, 0)) return 0; /* grouping vowel, line 134 */
                    z->c = z->l - m12;
                    {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 3); /* hop, line 134 */
                        if (ret < 0) return 0;
                        z->c = ret;
                    }
                }
                z->c = z->l - m_test11;
            }
            {   int ret = slice_del(z); /* delete, line 134 */
                if (ret < 0) return ret;
            }
            break;
        case 15:
            {   int m_test13 = z->l - z->c; /* test, line 136 */
                {   int m14 = z->l - z->c; (void)m14; /* and, line 136 */
                    if (in_grouping_b_U(z, g_vowel, 1072, 1257, 0)) return 0; /* grouping vowel, line 136 */
                    z->c = z->l - m14;
                    {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 3); /* hop, line 136 */
                        if (ret < 0) return 0;
                        z->c = ret;
                    }
                }
                z->c = z->l - m_test13;
            }
            {   int ret = slice_del(z); /* delete, line 136 */
                if (ret < 0) return ret;
            }
            {   int m_test15 = z->l - z->c; /* test, line 137 */
                among_var = find_among_b(z, a_5, 12); /* substring, line 137 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test15;
            }
            switch (among_var) { /* among, line 137 */
                case 0: return 0;
                case 1:
                    z->ket = z->c; /* [, line 138 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 138 */
                    }
                    z->bra = z->c; /* ], line 138 */
                    {   int ret = slice_del(z); /* delete, line 138 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
    }
    return 1;
}

static int r_noun_plural(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 147 */
    among_var = find_among_b(z, a_7, 12); /* substring, line 147 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 147 */
    switch (among_var) { /* among, line 147 */
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 2, s_7); /* <-, line 148 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_8); /* <-, line 149 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 2, s_9); /* <-, line 150 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_del(z); /* delete, line 152 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_noun_possessive(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 160 */
    among_var = find_among_b(z, a_9, 5); /* substring, line 160 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 160 */
    switch (among_var) { /* among, line 160 */
        case 0: return 0;
        case 1:
            {   int m_test1 = z->l - z->c; /* test, line 162 */
                {   int m2 = z->l - z->c; (void)m2; /* not, line 162 */
                    if (z->c - 3 <= z->lb || z->p[z->c - 1] != 189) goto lab0; /* substring, line 162 */
                    if (!(find_among_b(z, a_8, 4))) goto lab0;
                    return 0;
                lab0:
                    z->c = z->l - m2;
                }
                z->c = z->l - m_test1;
            }
            {   int ret = slice_del(z); /* delete, line 166 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_del(z); /* delete, line 170 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_noun_impersonal_possessive(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 177 */
    if (z->c - 3 <= z->lb || (z->p[z->c - 1] != 140 && z->p[z->c - 1] != 189)) return 0; /* substring, line 177 */
    among_var = find_among_b(z, a_12, 6);
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 177 */
    switch (among_var) { /* among, line 177 */
        case 0: return 0;
        case 1:
            {   int m_test1 = z->l - z->c; /* test, line 179 */
                among_var = find_among_b(z, a_10, 4); /* substring, line 179 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test1;
            }
            switch (among_var) { /* among, line 179 */
                case 0: return 0;
                case 1:
                    {   int ret = slice_del(z); /* delete, line 180 */
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    {   int ret = slice_from_s(z, 2, s_10); /* <-, line 181 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 2:
            {   int ret = slice_del(z); /* delete, line 186 */
                if (ret < 0) return ret;
            }
            {   int m_test2 = z->l - z->c; /* test, line 187 */
                if (!(eq_s_b(z, 2, s_11))) return 0; /* literal, line 187 */
                z->c = z->l - m_test2;
            }
            z->ket = z->c; /* [, line 187 */
            {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                if (ret < 0) return 0;
                z->c = ret; /* next, line 187 */
            }
            z->bra = z->c; /* ], line 187 */
            {   int ret = slice_del(z); /* delete, line 187 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int m_test3 = z->l - z->c; /* test, line 191 */
                among_var = find_among_b(z, a_11, 6); /* substring, line 191 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test3;
            }
            switch (among_var) { /* among, line 191 */
                case 0: return 0;
                case 1:
                    {   int ret = slice_del(z); /* delete, line 192 */
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    {   int ret = slice_from_s(z, 2, s_12); /* <-, line 193 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 4, s_13); /* <-, line 196 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 4, s_14); /* <-, line 197 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_noun_double_declination(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 208 */
    among_var = find_among_b(z, a_14, 6); /* substring, line 208 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 208 */
    switch (among_var) { /* among, line 208 */
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 2, s_15); /* <-, line 209 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_16); /* <-, line 210 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 2, s_17); /* <-, line 212 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int m_test1 = z->l - z->c; /* test, line 215 */
                if (in_grouping_b_U(z, g_vowel, 1072, 1257, 0)) return 0; /* grouping vowel, line 215 */
                z->c = z->l - m_test1;
            }
            {   int ret = slice_del(z); /* delete, line 215 */
                if (ret < 0) return ret;
            }
            {   int m_test2 = z->l - z->c; /* test, line 216 */
                among_var = find_among_b(z, a_13, 12); /* substring, line 216 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test2;
            }
            switch (among_var) { /* among, line 216 */
                case 0: return 0;
                case 1:
                    z->ket = z->c; /* [, line 217 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 217 */
                    }
                    z->bra = z->c; /* ], line 217 */
                    {   int ret = slice_del(z); /* delete, line 217 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 5:
            {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 2); /* hop, line 221 */
                if (ret < 0) return 0;
                z->c = ret;
            }
            {   int ret = slice_del(z); /* delete, line 221 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_verb_number_person(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 231 */
    among_var = find_among_b(z, a_16, 4); /* substring, line 231 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 231 */
    switch (among_var) { /* among, line 231 */
        case 0: return 0;
        case 1:
            {   int ret = slice_del(z); /* delete, line 233 */
                if (ret < 0) return ret;
            }
            {   int m_test1 = z->l - z->c; /* test, line 234 */
                if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 131 && z->p[z->c - 1] != 175)) return 0; /* substring, line 234 */
                among_var = find_among_b(z, a_15, 2);
                if (!(among_var)) return 0;
                z->c = z->l - m_test1;
            }
            switch (among_var) { /* among, line 234 */
                case 0: return 0;
                case 1:
                    z->ket = z->c; /* [, line 234 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 234 */
                    }
                    z->bra = z->c; /* ], line 234 */
                    {   int ret = slice_del(z); /* delete, line 234 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 2:
            {   int ret = slice_del(z); /* delete, line 237 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_verb_tense_mood(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 241 */
    among_var = find_among_b(z, a_17, 28); /* substring, line 241 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 241 */
    switch (among_var) { /* among, line 241 */
        case 0: return 0;
        case 1:
            {   int ret = slice_del(z); /* delete, line 242 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_del(z); /* delete, line 243 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_verb_stem(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 248 */
    among_var = find_among_b(z, a_18, 16); /* substring, line 248 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 248 */
    switch (among_var) { /* among, line 248 */
        case 0: return 0;
        case 1:
            {   int ret = slice_del(z); /* delete, line 251 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_18); /* <-, line 252 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 2, s_19); /* <-, line 253 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 2, s_20); /* <-, line 254 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

extern int X_stem(struct SN_env * z) { /* forwardmode */
    z->lb = z->c; z->c = z->l; /* backwards, line 267 */

    {   int m1 = z->l - z->c; (void)m1; /* do, line 269 */
        {   int ret = r_noun_possessive(z); /* call noun_possessive, line 269 */
            if (ret == 0) goto lab0;
            if (ret < 0) return ret;
        }
    lab0:
        z->c = z->l - m1;
    }
    {   int m2 = z->l - z->c; (void)m2; /* do, line 270 */
        {   int ret = r_noun_impersonal_possessive(z); /* call noun_impersonal_possessive, line 270 */
            if (ret == 0) goto lab1;
            if (ret < 0) return ret;
        }
    lab1:
        z->c = z->l - m2;
    }
    {   int m3 = z->l - z->c; (void)m3; /* do, line 271 */
        {   int ret = r_noun(z); /* call noun, line 271 */
            if (ret == 0) goto lab2;
            if (ret < 0) return ret;
        }
    lab2:
        z->c = z->l - m3;
    }
    {   int m4 = z->l - z->c; (void)m4; /* do, line 272 */
        {   int ret = r_noun_double_declination(z); /* call noun_double_declination, line 272 */
            if (ret == 0) goto lab3;
            if (ret < 0) return ret;
        }
    lab3:
        z->c = z->l - m4;
    }
    {   int m5 = z->l - z->c; (void)m5; /* do, line 273 */
        {   int ret = r_noun_plural(z); /* call noun_plural, line 273 */
            if (ret == 0) goto lab4;
            if (ret < 0) return ret;
        }
    lab4:
        z->c = z->l - m5;
    }
    {   int m6 = z->l - z->c; (void)m6; /* do, line 274 */
        {   int ret = r_verb_number_person(z); /* call verb_number_person, line 274 */
            if (ret == 0) goto lab5;
            if (ret < 0) return ret;
        }
    lab5:
        z->c = z->l - m6;
    }
    {   int m7 = z->l - z->c; (void)m7; /* do, line 275 */
        {   int ret = r_verb_tense_mood(z); /* call verb_tense_mood, line 275 */
            if (ret == 0) goto lab6;
            if (ret < 0) return ret;
        }
    lab6:
        z->c = z->l - m7;
    }
    {   int m8 = z->l - z->c; (void)m8; /* do, line 276 */
        {   int ret = r_verb_stem(z); /* call verb_stem, line 276 */
            if (ret == 0) goto lab7;
            if (ret < 0) return ret;
        }
    lab7:
        z->c = z->l - m8;
    }
    z->c = z->lb;
    return 1;
}

extern struct SN_env * X_create_env(void) { return SN_create_env(0, 0, 0); }

extern void X_close_env(struct SN_env * z) { SN_close_env(z, 0); }

