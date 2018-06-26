/* This file was generated automatically by the Snowball to ISO C compiler */
/* http://snowballstem.org/ */

#include "header.h"

static int r_gerund(struct SN_env * z);
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
extern int kalmyk_UTF_8_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif


extern struct SN_env * kalmyk_UTF_8_create_env(void);
extern void kalmyk_UTF_8_close_env(struct SN_env * z);


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

static const symbol s_4_0[2] = { 0xD1, 0x85 };

static const struct among a_4[1] =
{
/*  0 */ { 2, s_4_0, -1, -1, 0}
};

static const symbol s_5_0[4] = { 0xD0, 0xB3, 0xD1, 0x83 };
static const symbol s_5_1[6] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD1, 0x83 };
static const symbol s_5_2[4] = { 0xD0, 0xBA, 0xD1, 0x83 };
static const symbol s_5_3[4] = { 0xD0, 0xBC, 0xD1, 0x83 };
static const symbol s_5_4[4] = { 0xD0, 0xB3, 0xD2, 0xAF };
static const symbol s_5_5[6] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD2, 0xAF };
static const symbol s_5_6[4] = { 0xD0, 0xBA, 0xD2, 0xAF };
static const symbol s_5_7[4] = { 0xD0, 0xBC, 0xD2, 0xAF };

static const struct among a_5[8] =
{
/*  0 */ { 4, s_5_0, -1, -1, 0},
/*  1 */ { 6, s_5_1, 0, -1, 0},
/*  2 */ { 4, s_5_2, -1, -1, 0},
/*  3 */ { 4, s_5_3, -1, -1, 0},
/*  4 */ { 4, s_5_4, -1, -1, 0},
/*  5 */ { 6, s_5_5, 4, -1, 0},
/*  6 */ { 4, s_5_6, -1, -1, 0},
/*  7 */ { 4, s_5_7, -1, -1, 0}
};

static const symbol s_6_0[4] = { 0xD1, 0x83, 0xD1, 0x83 };
static const symbol s_6_1[4] = { 0xD1, 0x8B, 0xD1, 0x8B };
static const symbol s_6_2[4] = { 0xD1, 0x8D, 0xD1, 0x8D };
static const symbol s_6_3[4] = { 0xD1, 0x8E, 0xD1, 0x8E };
static const symbol s_6_4[4] = { 0xD1, 0x8F, 0xD1, 0x8F };
static const symbol s_6_5[4] = { 0xD3, 0x99, 0xD3, 0x99 };
static const symbol s_6_6[4] = { 0xD3, 0xA9, 0xD3, 0xA9 };
static const symbol s_6_7[4] = { 0xD2, 0xAF, 0xD2, 0xAF };
static const symbol s_6_8[4] = { 0xD0, 0xB0, 0xD0, 0xB0 };
static const symbol s_6_9[4] = { 0xD0, 0xB5, 0xD0, 0xB5 };
static const symbol s_6_10[4] = { 0xD0, 0xB8, 0xD0, 0xB8 };
static const symbol s_6_11[4] = { 0xD0, 0xBE, 0xD0, 0xBE };

static const struct among a_6[12] =
{
/*  0 */ { 4, s_6_0, -1, 1, 0},
/*  1 */ { 4, s_6_1, -1, 1, 0},
/*  2 */ { 4, s_6_2, -1, 1, 0},
/*  3 */ { 4, s_6_3, -1, 1, 0},
/*  4 */ { 4, s_6_4, -1, 1, 0},
/*  5 */ { 4, s_6_5, -1, 1, 0},
/*  6 */ { 4, s_6_6, -1, 1, 0},
/*  7 */ { 4, s_6_7, -1, 1, 0},
/*  8 */ { 4, s_6_8, -1, 1, 0},
/*  9 */ { 4, s_6_9, -1, 1, 0},
/* 10 */ { 4, s_6_10, -1, 1, 0},
/* 11 */ { 4, s_6_11, -1, 1, 0}
};

static const symbol s_7_0[4] = { 0xD1, 0x83, 0xD1, 0x80 };
static const symbol s_7_1[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD1, 0x83, 0xD1, 0x80 };
static const symbol s_7_2[6] = { 0xD2, 0xBB, 0xD1, 0x83, 0xD1, 0x80 };
static const symbol s_7_3[4] = { 0xD3, 0x99, 0xD1, 0x80 };
static const symbol s_7_4[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD3, 0x99, 0xD1, 0x80 };
static const symbol s_7_5[6] = { 0xD2, 0xBB, 0xD3, 0x99, 0xD1, 0x80 };
static const symbol s_7_6[4] = { 0xD2, 0xAF, 0xD1, 0x80 };
static const symbol s_7_7[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD2, 0xAF, 0xD1, 0x80 };
static const symbol s_7_8[6] = { 0xD2, 0xBB, 0xD2, 0xAF, 0xD1, 0x80 };
static const symbol s_7_9[4] = { 0xD0, 0xB0, 0xD1, 0x80 };
static const symbol s_7_10[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD0, 0xB0, 0xD1, 0x80 };
static const symbol s_7_11[6] = { 0xD2, 0xBB, 0xD0, 0xB0, 0xD1, 0x80 };
static const symbol s_7_12[4] = { 0xD3, 0x99, 0xD1, 0x81 };
static const symbol s_7_13[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD3, 0x99, 0xD1, 0x81 };
static const symbol s_7_14[6] = { 0xD2, 0xBB, 0xD3, 0x99, 0xD1, 0x81 };
static const symbol s_7_15[4] = { 0xD0, 0xB0, 0xD1, 0x81 };
static const symbol s_7_16[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD0, 0xB0, 0xD1, 0x81 };
static const symbol s_7_17[6] = { 0xD2, 0xBB, 0xD0, 0xB0, 0xD1, 0x81 };
static const symbol s_7_18[2] = { 0xD1, 0x82 };
static const symbol s_7_19[4] = { 0xD1, 0x82, 0xD3, 0x99 };
static const symbol s_7_20[4] = { 0xD0, 0xBB, 0xD3, 0x99 };
static const symbol s_7_21[4] = { 0xD0, 0xBD, 0xD3, 0x99 };
static const symbol s_7_22[4] = { 0xD1, 0x82, 0xD0, 0xB0 };
static const symbol s_7_23[4] = { 0xD0, 0xBB, 0xD0, 0xB0 };
static const symbol s_7_24[4] = { 0xD0, 0xBD, 0xD0, 0xB0 };
static const symbol s_7_25[2] = { 0xD0, 0xB3 };
static const symbol s_7_26[4] = { 0xD1, 0x8B, 0xD0, 0xB3 };
static const symbol s_7_27[4] = { 0xD0, 0xB8, 0xD0, 0xB3 };
static const symbol s_7_28[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD0, 0xB8, 0xD0, 0xB3 };
static const symbol s_7_29[2] = { 0xD0, 0xB4 };
static const symbol s_7_30[2] = { 0xD0, 0xBD };
static const symbol s_7_31[4] = { 0xD1, 0x8B, 0xD0, 0xBD };
static const symbol s_7_32[4] = { 0xD0, 0xB8, 0xD0, 0xBD };
static const symbol s_7_33[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD0, 0xB8, 0xD0, 0xBD };
static const symbol s_7_34[6] = { 0xD2, 0xBB, 0xD0, 0xB8, 0xD0, 0xBD };

static const struct among a_7[35] =
{
/*  0 */ { 4, s_7_0, -1, 13, 0},
/*  1 */ { 8, s_7_1, 0, 10, 0},
/*  2 */ { 6, s_7_2, 0, 11, 0},
/*  3 */ { 4, s_7_3, -1, 12, 0},
/*  4 */ { 8, s_7_4, 3, 6, 0},
/*  5 */ { 6, s_7_5, 3, 7, 0},
/*  6 */ { 4, s_7_6, -1, 13, 0},
/*  7 */ { 8, s_7_7, 6, 10, 0},
/*  8 */ { 6, s_7_8, 6, 11, 0},
/*  9 */ { 4, s_7_9, -1, 12, 0},
/* 10 */ { 8, s_7_10, 9, 6, 0},
/* 11 */ { 6, s_7_11, 9, 7, 0},
/* 12 */ { 4, s_7_12, -1, 13, 0},
/* 13 */ { 8, s_7_13, 12, 8, 0},
/* 14 */ { 6, s_7_14, 12, 9, 0},
/* 15 */ { 4, s_7_15, -1, 13, 0},
/* 16 */ { 8, s_7_16, 15, 8, 0},
/* 17 */ { 6, s_7_17, 15, 9, 0},
/* 18 */ { 2, s_7_18, -1, 13, 0},
/* 19 */ { 4, s_7_19, -1, 13, 0},
/* 20 */ { 4, s_7_20, -1, 12, 0},
/* 21 */ { 4, s_7_21, -1, 2, 0},
/* 22 */ { 4, s_7_22, -1, 13, 0},
/* 23 */ { 4, s_7_23, -1, 12, 0},
/* 24 */ { 4, s_7_24, -1, 1, 0},
/* 25 */ { 2, s_7_25, -1, 16, 0},
/* 26 */ { 4, s_7_26, 25, 13, 0},
/* 27 */ { 4, s_7_27, 25, 13, 0},
/* 28 */ { 8, s_7_28, 27, 5, 0},
/* 29 */ { 2, s_7_29, -1, 14, 0},
/* 30 */ { 2, s_7_30, -1, 15, 0},
/* 31 */ { 4, s_7_31, 30, 13, 0},
/* 32 */ { 4, s_7_32, 30, 13, 0},
/* 33 */ { 8, s_7_33, 32, 3, 0},
/* 34 */ { 6, s_7_34, 32, 4, 0}
};

static const symbol s_8_0[4] = { 0xD0, 0xBD, 0xD1, 0x80 };
static const symbol s_8_1[2] = { 0xD1, 0x81 };
static const symbol s_8_2[4] = { 0xD1, 0x83, 0xD0, 0xB4 };
static const symbol s_8_3[6] = { 0xD0, 0xB3, 0xD1, 0x83, 0xD0, 0xB4 };
static const symbol s_8_4[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD1, 0x83, 0xD0, 0xB4 };
static const symbol s_8_5[6] = { 0xD0, 0xBA, 0xD1, 0x83, 0xD0, 0xB4 };
static const symbol s_8_6[6] = { 0xD0, 0xBC, 0xD1, 0x83, 0xD0, 0xB4 };
static const symbol s_8_7[4] = { 0xD2, 0xAF, 0xD0, 0xB4 };
static const symbol s_8_8[6] = { 0xD0, 0xB3, 0xD2, 0xAF, 0xD0, 0xB4 };
static const symbol s_8_9[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD2, 0xAF, 0xD0, 0xB4 };
static const symbol s_8_10[6] = { 0xD0, 0xBA, 0xD2, 0xAF, 0xD0, 0xB4 };
static const symbol s_8_11[6] = { 0xD0, 0xBC, 0xD2, 0xAF, 0xD0, 0xB4 };

static const struct among a_8[12] =
{
/*  0 */ { 4, s_8_0, -1, 4, 0},
/*  1 */ { 2, s_8_1, -1, 4, 0},
/*  2 */ { 4, s_8_2, -1, 4, 0},
/*  3 */ { 6, s_8_3, 2, 2, 0},
/*  4 */ { 8, s_8_4, 3, 1, 0},
/*  5 */ { 6, s_8_5, 2, 3, 0},
/*  6 */ { 6, s_8_6, 2, 4, 0},
/*  7 */ { 4, s_8_7, -1, 4, 0},
/*  8 */ { 6, s_8_8, 7, 2, 0},
/*  9 */ { 8, s_8_9, 8, 1, 0},
/* 10 */ { 6, s_8_10, 7, 3, 0},
/* 11 */ { 6, s_8_11, 7, 4, 0}
};

static const symbol s_9_0[4] = { 0xD1, 0x8B, 0xD0, 0xBD };
static const symbol s_9_1[4] = { 0xD3, 0x99, 0xD0, 0xBD };
static const symbol s_9_2[4] = { 0xD0, 0xB0, 0xD0, 0xBD };
static const symbol s_9_3[4] = { 0xD0, 0xB8, 0xD0, 0xBD };

static const struct among a_9[4] =
{
/*  0 */ { 4, s_9_0, -1, -1, 0},
/*  1 */ { 4, s_9_1, -1, -1, 0},
/*  2 */ { 4, s_9_2, -1, -1, 0},
/*  3 */ { 4, s_9_3, -1, -1, 0}
};

static const symbol s_10_0[4] = { 0xD0, 0xBD, 0xD1, 0x8C };
static const symbol s_10_1[2] = { 0xD0, 0xBC };
static const symbol s_10_2[4] = { 0xD1, 0x82, 0xD0, 0xBD };
static const symbol s_10_3[4] = { 0xD1, 0x87, 0xD0, 0xBD };
static const symbol s_10_4[6] = { 0xD0, 0xBC, 0xD0, 0xB4, 0xD0, 0xBD };

static const struct among a_10[5] =
{
/*  0 */ { 4, s_10_0, -1, 1, 0},
/*  1 */ { 2, s_10_1, -1, 2, 0},
/*  2 */ { 4, s_10_2, -1, 2, 0},
/*  3 */ { 4, s_10_3, -1, 2, 0},
/*  4 */ { 6, s_10_4, -1, 2, 0}
};

static const symbol s_11_0[2] = { 0xD1, 0x8B };
static const symbol s_11_1[2] = { 0xD3, 0x99 };
static const symbol s_11_2[2] = { 0xD0, 0xB0 };
static const symbol s_11_3[2] = { 0xD0, 0xB8 };

static const struct among a_11[4] =
{
/*  0 */ { 2, s_11_0, -1, 2, 0},
/*  1 */ { 2, s_11_1, -1, 1, 0},
/*  2 */ { 2, s_11_2, -1, 1, 0},
/*  3 */ { 2, s_11_3, -1, 2, 0}
};

static const symbol s_12_0[2] = { 0xD1, 0x83 };
static const symbol s_12_1[2] = { 0xD3, 0x99 };
static const symbol s_12_2[4] = { 0xD0, 0xBB, 0xD3, 0x99 };
static const symbol s_12_3[2] = { 0xD2, 0xAF };
static const symbol s_12_4[2] = { 0xD0, 0xB0 };
static const symbol s_12_5[4] = { 0xD0, 0xBB, 0xD0, 0xB0 };

static const struct among a_12[6] =
{
/*  0 */ { 2, s_12_0, -1, 2, 0},
/*  1 */ { 2, s_12_1, -1, 2, 0},
/*  2 */ { 4, s_12_2, 1, 1, 0},
/*  3 */ { 2, s_12_3, -1, 2, 0},
/*  4 */ { 2, s_12_4, -1, 2, 0},
/*  5 */ { 4, s_12_5, 4, 1, 0}
};

static const symbol s_13_0[6] = { 0xD0, 0xBD, 0xD0, 0xBD, 0xD1, 0x8C };
static const symbol s_13_1[4] = { 0xD1, 0x80, 0xD0, 0xBD };
static const symbol s_13_2[6] = { 0xD3, 0x99, 0xD1, 0x81, 0xD0, 0xBD };
static const symbol s_13_3[6] = { 0xD0, 0xB0, 0xD1, 0x81, 0xD0, 0xBD };
static const symbol s_13_4[4] = { 0xD3, 0x99, 0xD0, 0xBD };
static const symbol s_13_5[4] = { 0xD0, 0xB0, 0xD0, 0xBD };

static const struct among a_13[6] =
{
/*  0 */ { 6, s_13_0, -1, 1, 0},
/*  1 */ { 4, s_13_1, -1, 3, 0},
/*  2 */ { 6, s_13_2, -1, 5, 0},
/*  3 */ { 6, s_13_3, -1, 4, 0},
/*  4 */ { 4, s_13_4, -1, 2, 0},
/*  5 */ { 4, s_13_5, -1, 2, 0}
};

static const symbol s_14_0[4] = { 0xD1, 0x83, 0xD1, 0x83 };
static const symbol s_14_1[4] = { 0xD1, 0x8B, 0xD1, 0x8B };
static const symbol s_14_2[4] = { 0xD1, 0x8D, 0xD1, 0x8D };
static const symbol s_14_3[4] = { 0xD1, 0x8E, 0xD1, 0x8E };
static const symbol s_14_4[4] = { 0xD1, 0x8F, 0xD1, 0x8F };
static const symbol s_14_5[4] = { 0xD3, 0x99, 0xD3, 0x99 };
static const symbol s_14_6[4] = { 0xD3, 0xA9, 0xD3, 0xA9 };
static const symbol s_14_7[4] = { 0xD2, 0xAF, 0xD2, 0xAF };
static const symbol s_14_8[4] = { 0xD0, 0xB0, 0xD0, 0xB0 };
static const symbol s_14_9[4] = { 0xD0, 0xB5, 0xD0, 0xB5 };
static const symbol s_14_10[4] = { 0xD0, 0xB8, 0xD0, 0xB8 };
static const symbol s_14_11[4] = { 0xD0, 0xBE, 0xD0, 0xBE };

static const struct among a_14[12] =
{
/*  0 */ { 4, s_14_0, -1, 1, 0},
/*  1 */ { 4, s_14_1, -1, 1, 0},
/*  2 */ { 4, s_14_2, -1, 1, 0},
/*  3 */ { 4, s_14_3, -1, 1, 0},
/*  4 */ { 4, s_14_4, -1, 1, 0},
/*  5 */ { 4, s_14_5, -1, 1, 0},
/*  6 */ { 4, s_14_6, -1, 1, 0},
/*  7 */ { 4, s_14_7, -1, 1, 0},
/*  8 */ { 4, s_14_8, -1, 1, 0},
/*  9 */ { 4, s_14_9, -1, 1, 0},
/* 10 */ { 4, s_14_10, -1, 1, 0},
/* 11 */ { 4, s_14_11, -1, 1, 0}
};

static const symbol s_15_0[4] = { 0xD1, 0x82, 0xD3, 0x99 };
static const symbol s_15_1[4] = { 0xD0, 0xBD, 0xD3, 0x99 };
static const symbol s_15_2[4] = { 0xD1, 0x82, 0xD0, 0xB0 };
static const symbol s_15_3[4] = { 0xD0, 0xBD, 0xD0, 0xB0 };
static const symbol s_15_4[8] = { 0xD2, 0xA3, 0xD0, 0xB3, 0xD0, 0xB8, 0xD0, 0xBD };
static const symbol s_15_5[6] = { 0xD2, 0xBB, 0xD0, 0xB8, 0xD0, 0xBD };

static const struct among a_15[6] =
{
/*  0 */ { 4, s_15_0, -1, 5, 0},
/*  1 */ { 4, s_15_1, -1, 2, 0},
/*  2 */ { 4, s_15_2, -1, 5, 0},
/*  3 */ { 4, s_15_3, -1, 1, 0},
/*  4 */ { 8, s_15_4, -1, 3, 0},
/*  5 */ { 6, s_15_5, -1, 4, 0}
};

static const symbol s_16_0[2] = { 0xD1, 0x83 };
static const symbol s_16_1[2] = { 0xD2, 0xAF };

static const struct among a_16[2] =
{
/*  0 */ { 2, s_16_0, -1, 1, 0},
/*  1 */ { 2, s_16_1, -1, 1, 0}
};

static const symbol s_17_0[2] = { 0xD1, 0x82 };
static const symbol s_17_1[2] = { 0xD1, 0x87 };
static const symbol s_17_2[2] = { 0xD0, 0xB2 };
static const symbol s_17_3[8] = { 0xD0, 0xB2, 0xD0, 0xB8, 0xD0, 0xB4, 0xD0, 0xBD };

static const struct among a_17[4] =
{
/*  0 */ { 2, s_17_0, -1, 2, 0},
/*  1 */ { 2, s_17_1, -1, 2, 0},
/*  2 */ { 2, s_17_2, -1, 1, 0},
/*  3 */ { 8, s_17_3, -1, 1, 0}
};

static const symbol s_18_0[2] = { 0xD1, 0x85 };

static const struct among a_18[1] =
{
/*  0 */ { 2, s_18_0, -1, -1, 0}
};

static const symbol s_19_0[6] = { 0xD1, 0x81, 0xD3, 0x99, 0xD1, 0x80 };
static const symbol s_19_1[6] = { 0xD1, 0x81, 0xD0, 0xB0, 0xD1, 0x80 };

static const struct among a_19[2] =
{
/*  0 */ { 6, s_19_0, -1, -1, 0},
/*  1 */ { 6, s_19_1, -1, -1, 0}
};

static const symbol s_20_0[2] = { 0xD0, 0xB4 };

static const struct among a_20[1] =
{
/*  0 */ { 2, s_20_0, -1, -1, 0}
};

static const symbol s_21_0[2] = { 0xD1, 0x81 };
static const symbol s_21_1[4] = { 0xD1, 0x81, 0xD1, 0x83 };
static const symbol s_21_2[2] = { 0xD1, 0x87 };
static const symbol s_21_3[4] = { 0xD0, 0xB8, 0xD1, 0x8F };
static const symbol s_21_4[2] = { 0xD2, 0x97 };
static const symbol s_21_5[2] = { 0xD3, 0x99 };
static const symbol s_21_6[4] = { 0xD1, 0x81, 0xD3, 0x99 };
static const symbol s_21_7[6] = { 0xD1, 0x82, 0xD1, 0x85, 0xD3, 0x99 };
static const symbol s_21_8[6] = { 0xD0, 0xB2, 0xD0, 0xB7, 0xD3, 0x99 };
static const symbol s_21_9[4] = { 0xD0, 0xBB, 0xD3, 0x99 };
static const symbol s_21_10[4] = { 0xD0, 0xBD, 0xD3, 0x99 };
static const symbol s_21_11[8] = { 0xD2, 0x97, 0xD3, 0x99, 0xD0, 0xBD, 0xD3, 0x99 };
static const symbol s_21_12[4] = { 0xD1, 0x81, 0xD2, 0xAF };
static const symbol s_21_13[2] = { 0xD0, 0xB0 };
static const symbol s_21_14[4] = { 0xD1, 0x81, 0xD0, 0xB0 };
static const symbol s_21_15[6] = { 0xD1, 0x82, 0xD1, 0x85, 0xD0, 0xB0 };
static const symbol s_21_16[6] = { 0xD0, 0xB2, 0xD0, 0xB7, 0xD0, 0xB0 };
static const symbol s_21_17[4] = { 0xD0, 0xBB, 0xD0, 0xB0 };
static const symbol s_21_18[4] = { 0xD0, 0xBD, 0xD0, 0xB0 };
static const symbol s_21_19[8] = { 0xD1, 0x87, 0xD0, 0xB0, 0xD0, 0xBD, 0xD0, 0xB0 };
static const symbol s_21_20[8] = { 0xD2, 0x97, 0xD0, 0xB0, 0xD0, 0xBD, 0xD0, 0xB0 };
static const symbol s_21_21[2] = { 0xD0, 0xB2 };
static const symbol s_21_22[2] = { 0xD0, 0xB3 };
static const symbol s_21_23[2] = { 0xD0, 0xB9 };
static const symbol s_21_24[4] = { 0xD0, 0xB8, 0xD0, 0xB9 };
static const symbol s_21_25[4] = { 0xD1, 0x81, 0xD0, 0xBD };
static const symbol s_21_26[4] = { 0xD1, 0x82, 0xD0, 0xBD };
static const symbol s_21_27[6] = { 0xD1, 0x81, 0xD0, 0xBC, 0xD0, 0xBD };

static const struct among a_21[28] =
{
/*  0 */ { 2, s_21_0, -1, 5, 0},
/*  1 */ { 4, s_21_1, -1, 5, 0},
/*  2 */ { 2, s_21_2, -1, 4, 0},
/*  3 */ { 4, s_21_3, -1, 5, 0},
/*  4 */ { 2, s_21_4, -1, 4, 0},
/*  5 */ { 2, s_21_5, -1, 2, 0},
/*  6 */ { 4, s_21_6, 5, 5, 0},
/*  7 */ { 6, s_21_7, 5, 5, 0},
/*  8 */ { 6, s_21_8, 5, 5, 0},
/*  9 */ { 4, s_21_9, 5, 1, 0},
/* 10 */ { 4, s_21_10, 5, 4, 0},
/* 11 */ { 8, s_21_11, 10, 4, 0},
/* 12 */ { 4, s_21_12, -1, 5, 0},
/* 13 */ { 2, s_21_13, -1, 2, 0},
/* 14 */ { 4, s_21_14, 13, 5, 0},
/* 15 */ { 6, s_21_15, 13, 5, 0},
/* 16 */ { 6, s_21_16, 13, 5, 0},
/* 17 */ { 4, s_21_17, 13, 1, 0},
/* 18 */ { 4, s_21_18, 13, 4, 0},
/* 19 */ { 8, s_21_19, 18, 4, 0},
/* 20 */ { 8, s_21_20, 18, 4, 0},
/* 21 */ { 2, s_21_21, -1, 4, 0},
/* 22 */ { 2, s_21_22, -1, 3, 0},
/* 23 */ { 2, s_21_23, -1, 5, 0},
/* 24 */ { 4, s_21_24, 23, 5, 0},
/* 25 */ { 4, s_21_25, -1, 4, 0},
/* 26 */ { 4, s_21_26, -1, 5, 0},
/* 27 */ { 6, s_21_27, -1, 4, 0}
};

static const symbol s_22_0[6] = { 0xD1, 0x81, 0xD3, 0x99, 0xD1, 0x80 };
static const symbol s_22_1[6] = { 0xD1, 0x81, 0xD0, 0xB0, 0xD1, 0x80 };
static const symbol s_22_2[4] = { 0xD1, 0x85, 0xD0, 0xBB };

static const struct among a_22[3] =
{
/*  0 */ { 6, s_22_0, -1, -1, 0},
/*  1 */ { 6, s_22_1, -1, -1, 0},
/*  2 */ { 4, s_22_2, -1, -1, 0}
};

static const symbol s_23_0[4] = { 0xD0, 0xB4, 0xD1, 0x85 };
static const symbol s_23_1[4] = { 0xD0, 0xBB, 0xD1, 0x86 };
static const symbol s_23_2[2] = { 0xD3, 0x99 };
static const symbol s_23_3[6] = { 0xD1, 0x86, 0xD1, 0x85, 0xD3, 0x99 };
static const symbol s_23_4[4] = { 0xD2, 0x97, 0xD3, 0x99 };
static const symbol s_23_5[2] = { 0xD0, 0xB0 };
static const symbol s_23_6[6] = { 0xD1, 0x86, 0xD1, 0x85, 0xD0, 0xB0 };
static const symbol s_23_7[4] = { 0xD2, 0x97, 0xD0, 0xB0 };
static const symbol s_23_8[4] = { 0xD1, 0x80, 0xD0, 0xB3 };
static const symbol s_23_9[4] = { 0xD0, 0xB3, 0xD0, 0xB4 };
static const symbol s_23_10[4] = { 0xD0, 0xBB, 0xD0, 0xB4 };
static const symbol s_23_11[4] = { 0xD1, 0x81, 0xD0, 0xBA };
static const symbol s_23_12[4] = { 0xD1, 0x87, 0xD0, 0xBA };
static const symbol s_23_13[4] = { 0xD1, 0x83, 0xD0, 0xBB };
static const symbol s_23_14[4] = { 0xD2, 0xAF, 0xD0, 0xBB };
static const symbol s_23_15[4] = { 0xD0, 0xBB, 0xD2, 0xBB };

static const struct among a_23[16] =
{
/*  0 */ { 4, s_23_0, -1, 4, 0},
/*  1 */ { 4, s_23_1, -1, 2, 0},
/*  2 */ { 2, s_23_2, -1, 1, 0},
/*  3 */ { 6, s_23_3, 2, 2, 0},
/*  4 */ { 4, s_23_4, 2, 2, 0},
/*  5 */ { 2, s_23_5, -1, 1, 0},
/*  6 */ { 6, s_23_6, 5, 2, 0},
/*  7 */ { 4, s_23_7, 5, 2, 0},
/*  8 */ { 4, s_23_8, -1, 3, 0},
/*  9 */ { 4, s_23_9, -1, 2, 0},
/* 10 */ { 4, s_23_10, -1, 2, 0},
/* 11 */ { 4, s_23_11, -1, 5, 0},
/* 12 */ { 4, s_23_12, -1, 2, 0},
/* 13 */ { 4, s_23_13, -1, 2, 0},
/* 14 */ { 4, s_23_14, -1, 2, 0},
/* 15 */ { 4, s_23_15, -1, 2, 0}
};

static const symbol s_24_0[6] = { 0xD1, 0x85, 0xD3, 0x99, 0xD1, 0x80 };
static const symbol s_24_1[6] = { 0xD1, 0x85, 0xD0, 0xB0, 0xD1, 0x80 };
static const symbol s_24_2[4] = { 0xD0, 0xB3, 0xD1, 0x87 };
static const symbol s_24_3[8] = { 0xD1, 0x81, 0xD3, 0x99, 0xD1, 0x80, 0xD3, 0x99 };
static const symbol s_24_4[6] = { 0xD1, 0x85, 0xD0, 0xBB, 0xD3, 0x99 };
static const symbol s_24_5[8] = { 0xD1, 0x81, 0xD0, 0xB0, 0xD1, 0x80, 0xD0, 0xB0 };
static const symbol s_24_6[6] = { 0xD1, 0x85, 0xD0, 0xBB, 0xD0, 0xB0 };
static const symbol s_24_7[4] = { 0xD0, 0xB4, 0xD0, 0xB3 };
static const symbol s_24_8[4] = { 0xD3, 0x99, 0xD0, 0xB4 };
static const symbol s_24_9[4] = { 0xD0, 0xB0, 0xD0, 0xB4 };
static const symbol s_24_10[4] = { 0xD1, 0x82, 0xD0, 0xBB };
static const symbol s_24_11[10] = { 0xD1, 0x85, 0xD0, 0xBB, 0xD3, 0x99, 0xD1, 0x80, 0xD0, 0xBD };
static const symbol s_24_12[10] = { 0xD1, 0x85, 0xD0, 0xBB, 0xD0, 0xB0, 0xD1, 0x80, 0xD0, 0xBD };
static const symbol s_24_13[4] = { 0xD1, 0x81, 0xD0, 0xBD };
static const symbol s_24_14[6] = { 0xD0, 0xB2, 0xD1, 0x87, 0xD0, 0xBD };

static const struct among a_24[15] =
{
/*  0 */ { 6, s_24_0, -1, 1, 0},
/*  1 */ { 6, s_24_1, -1, 1, 0},
/*  2 */ { 4, s_24_2, -1, 1, 0},
/*  3 */ { 8, s_24_3, -1, 1, 0},
/*  4 */ { 6, s_24_4, -1, 1, 0},
/*  5 */ { 8, s_24_5, -1, 1, 0},
/*  6 */ { 6, s_24_6, -1, 1, 0},
/*  7 */ { 4, s_24_7, -1, 1, 0},
/*  8 */ { 4, s_24_8, -1, 1, 0},
/*  9 */ { 4, s_24_9, -1, 1, 0},
/* 10 */ { 4, s_24_10, -1, 1, 0},
/* 11 */ { 10, s_24_11, -1, 1, 0},
/* 12 */ { 10, s_24_12, -1, 1, 0},
/* 13 */ { 4, s_24_13, -1, 1, 0},
/* 14 */ { 6, s_24_14, -1, 1, 0}
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
    z->ket = z->c; /* [, line 83 */
    among_var = find_among_b(z, a_7, 35); /* substring, line 83 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 83 */
    switch (among_var) { /* among, line 83 */
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 2, s_0); /* <-, line 84 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_1); /* <-, line 85 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 2, s_2); /* <-, line 87 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int m_test1 = z->l - z->c; /* test, line 90 */
                if (in_grouping_b_U(z, g_vowel, 1072, 1257, 0)) return 0; /* grouping vowel, line 90 */
                z->c = z->l - m_test1;
            }
            {   int ret = slice_del(z); /* delete, line 90 */
                if (ret < 0) return ret;
            }
            {   int m_test2 = z->l - z->c; /* test, line 91 */
                among_var = find_among_b(z, a_0, 12); /* substring, line 91 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test2;
            }
            switch (among_var) { /* among, line 91 */
                case 0: return 0;
                case 1:
                    z->ket = z->c; /* [, line 92 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 92 */
                    }
                    z->bra = z->c; /* ], line 92 */
                    {   int ret = slice_del(z); /* delete, line 92 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 2, s_3); /* <-, line 96 */
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {   int ret = slice_from_s(z, 2, s_4); /* <-, line 100 */
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {   int m_test3 = z->l - z->c; /* test, line 102 */
                if (in_grouping_b_U(z, g_vowel, 1072, 1257, 0)) return 0; /* grouping vowel, line 102 */
                z->c = z->l - m_test3;
            }
            {   int ret = slice_del(z); /* delete, line 102 */
                if (ret < 0) return ret;
            }
            {   int m_test4 = z->l - z->c; /* test, line 103 */
                among_var = find_among_b(z, a_1, 12); /* substring, line 103 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test4;
            }
            switch (among_var) { /* among, line 103 */
                case 0: return 0;
                case 1:
                    z->ket = z->c; /* [, line 104 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 104 */
                    }
                    z->bra = z->c; /* ], line 104 */
                    {   int ret = slice_del(z); /* delete, line 104 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 8:
            {   int ret = slice_from_s(z, 2, s_5); /* <-, line 108 */
                if (ret < 0) return ret;
            }
            break;
        case 9:
            {   int m_test5 = z->l - z->c; /* test, line 110 */
                if (in_grouping_b_U(z, g_vowel, 1072, 1257, 0)) return 0; /* grouping vowel, line 110 */
                z->c = z->l - m_test5;
            }
            {   int ret = slice_del(z); /* delete, line 110 */
                if (ret < 0) return ret;
            }
            {   int m_test6 = z->l - z->c; /* test, line 111 */
                among_var = find_among_b(z, a_2, 12); /* substring, line 111 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test6;
            }
            switch (among_var) { /* among, line 111 */
                case 0: return 0;
                case 1:
                    z->ket = z->c; /* [, line 112 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 112 */
                    }
                    z->bra = z->c; /* ], line 112 */
                    {   int ret = slice_del(z); /* delete, line 112 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 10:
            {   int ret = slice_from_s(z, 2, s_6); /* <-, line 117 */
                if (ret < 0) return ret;
            }
            break;
        case 11:
            {   int m_test7 = z->l - z->c; /* test, line 119 */
                if (in_grouping_b_U(z, g_vowel, 1072, 1257, 0)) return 0; /* grouping vowel, line 119 */
                z->c = z->l - m_test7;
            }
            {   int ret = slice_del(z); /* delete, line 119 */
                if (ret < 0) return ret;
            }
            {   int m_test8 = z->l - z->c; /* test, line 120 */
                among_var = find_among_b(z, a_3, 12); /* substring, line 120 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test8;
            }
            switch (among_var) { /* among, line 120 */
                case 0: return 0;
                case 1:
                    z->ket = z->c; /* [, line 121 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 121 */
                    }
                    z->bra = z->c; /* ], line 121 */
                    {   int ret = slice_del(z); /* delete, line 121 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 12:
            {   int m_test9 = z->l - z->c; /* test, line 127 */
                {   int m10 = z->l - z->c; (void)m10; /* not, line 127 */
                    if (z->c - 1 <= z->lb || z->p[z->c - 1] != 133) goto lab0; /* substring, line 127 */
                    if (!(find_among_b(z, a_4, 1))) goto lab0;
                    return 0;
                lab0:
                    z->c = z->l - m10;
                }
                z->c = z->l - m_test9;
            }
            {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 2); /* hop, line 128 */
                if (ret < 0) return 0;
                z->c = ret;
            }
            {   int ret = slice_del(z); /* delete, line 128 */
                if (ret < 0) return ret;
            }
            break;
        case 13:
            {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 2); /* hop, line 133 */
                if (ret < 0) return 0;
                z->c = ret;
            }
            {   int ret = slice_del(z); /* delete, line 133 */
                if (ret < 0) return ret;
            }
            break;
        case 14:
            {   int m_test11 = z->l - z->c; /* test, line 136 */
                {   int m12 = z->l - z->c; (void)m12; /* not, line 136 */
                    if (z->c - 3 <= z->lb || (z->p[z->c - 1] != 131 && z->p[z->c - 1] != 175)) goto lab1; /* substring, line 136 */
                    if (!(find_among_b(z, a_5, 8))) goto lab1;
                    return 0;
                lab1:
                    z->c = z->l - m12;
                }
                z->c = z->l - m_test11;
            }
            {   int ret = slice_del(z); /* delete, line 140 */
                if (ret < 0) return ret;
            }
            break;
        case 15:
            {   int m_test13 = z->l - z->c; /* test, line 142 */
                {   int m14 = z->l - z->c; (void)m14; /* and, line 142 */
                    if (in_grouping_b_U(z, g_vowel, 1072, 1257, 0)) return 0; /* grouping vowel, line 142 */
                    z->c = z->l - m14;
                    {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 3); /* hop, line 142 */
                        if (ret < 0) return 0;
                        z->c = ret;
                    }
                }
                z->c = z->l - m_test13;
            }
            {   int ret = slice_del(z); /* delete, line 142 */
                if (ret < 0) return ret;
            }
            break;
        case 16:
            {   int m_test15 = z->l - z->c; /* test, line 144 */
                {   int m16 = z->l - z->c; (void)m16; /* and, line 144 */
                    if (in_grouping_b_U(z, g_vowel, 1072, 1257, 0)) return 0; /* grouping vowel, line 144 */
                    z->c = z->l - m16;
                    {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 3); /* hop, line 144 */
                        if (ret < 0) return 0;
                        z->c = ret;
                    }
                }
                z->c = z->l - m_test15;
            }
            {   int ret = slice_del(z); /* delete, line 144 */
                if (ret < 0) return ret;
            }
            {   int m_test17 = z->l - z->c; /* test, line 145 */
                among_var = find_among_b(z, a_6, 12); /* substring, line 145 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test17;
            }
            switch (among_var) { /* among, line 145 */
                case 0: return 0;
                case 1:
                    z->ket = z->c; /* [, line 146 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 146 */
                    }
                    z->bra = z->c; /* ], line 146 */
                    {   int ret = slice_del(z); /* delete, line 146 */
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
    z->ket = z->c; /* [, line 155 */
    among_var = find_among_b(z, a_8, 12); /* substring, line 155 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 155 */
    switch (among_var) { /* among, line 155 */
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 2, s_7); /* <-, line 156 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_8); /* <-, line 157 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 2, s_9); /* <-, line 158 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_del(z); /* delete, line 160 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_noun_possessive(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 168 */
    among_var = find_among_b(z, a_10, 5); /* substring, line 168 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 168 */
    switch (among_var) { /* among, line 168 */
        case 0: return 0;
        case 1:
            {   int m_test1 = z->l - z->c; /* test, line 170 */
                {   int m2 = z->l - z->c; (void)m2; /* not, line 170 */
                    if (z->c - 3 <= z->lb || z->p[z->c - 1] != 189) goto lab0; /* substring, line 170 */
                    if (!(find_among_b(z, a_9, 4))) goto lab0;
                    return 0;
                lab0:
                    z->c = z->l - m2;
                }
                z->c = z->l - m_test1;
            }
            {   int ret = slice_del(z); /* delete, line 174 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_del(z); /* delete, line 178 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_noun_impersonal_possessive(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 185 */
    if (z->c - 3 <= z->lb || (z->p[z->c - 1] != 140 && z->p[z->c - 1] != 189)) return 0; /* substring, line 185 */
    among_var = find_among_b(z, a_13, 6);
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 185 */
    switch (among_var) { /* among, line 185 */
        case 0: return 0;
        case 1:
            {   int m_test1 = z->l - z->c; /* test, line 187 */
                among_var = find_among_b(z, a_11, 4); /* substring, line 187 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test1;
            }
            switch (among_var) { /* among, line 187 */
                case 0: return 0;
                case 1:
                    {   int ret = slice_del(z); /* delete, line 188 */
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    {   int ret = slice_from_s(z, 2, s_10); /* <-, line 189 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 2:
            {   int ret = slice_del(z); /* delete, line 194 */
                if (ret < 0) return ret;
            }
            {   int m_test2 = z->l - z->c; /* test, line 195 */
                if (!(eq_s_b(z, 2, s_11))) return 0; /* literal, line 195 */
                z->c = z->l - m_test2;
            }
            z->ket = z->c; /* [, line 195 */
            {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                if (ret < 0) return 0;
                z->c = ret; /* next, line 195 */
            }
            z->bra = z->c; /* ], line 195 */
            {   int ret = slice_del(z); /* delete, line 195 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int m_test3 = z->l - z->c; /* test, line 199 */
                among_var = find_among_b(z, a_12, 6); /* substring, line 199 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test3;
            }
            switch (among_var) { /* among, line 199 */
                case 0: return 0;
                case 1:
                    {   int ret = slice_del(z); /* delete, line 200 */
                        if (ret < 0) return ret;
                    }
                    break;
                case 2:
                    {   int ret = slice_from_s(z, 2, s_12); /* <-, line 201 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 4, s_13); /* <-, line 204 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 4, s_14); /* <-, line 205 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_noun_double_declination(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 216 */
    among_var = find_among_b(z, a_15, 6); /* substring, line 216 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 216 */
    switch (among_var) { /* among, line 216 */
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 2, s_15); /* <-, line 217 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_from_s(z, 2, s_16); /* <-, line 218 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 2, s_17); /* <-, line 220 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int m_test1 = z->l - z->c; /* test, line 223 */
                if (in_grouping_b_U(z, g_vowel, 1072, 1257, 0)) return 0; /* grouping vowel, line 223 */
                z->c = z->l - m_test1;
            }
            {   int ret = slice_del(z); /* delete, line 223 */
                if (ret < 0) return ret;
            }
            {   int m_test2 = z->l - z->c; /* test, line 224 */
                among_var = find_among_b(z, a_14, 12); /* substring, line 224 */
                if (!(among_var)) return 0;
                z->c = z->l - m_test2;
            }
            switch (among_var) { /* among, line 224 */
                case 0: return 0;
                case 1:
                    z->ket = z->c; /* [, line 225 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 225 */
                    }
                    z->bra = z->c; /* ], line 225 */
                    {   int ret = slice_del(z); /* delete, line 225 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 5:
            {   int ret = skip_utf8(z->p, z->c, z->lb, z->l, - 2); /* hop, line 229 */
                if (ret < 0) return 0;
                z->c = ret;
            }
            {   int ret = slice_del(z); /* delete, line 229 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_verb_number_person(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 239 */
    among_var = find_among_b(z, a_17, 4); /* substring, line 239 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 239 */
    switch (among_var) { /* among, line 239 */
        case 0: return 0;
        case 1:
            {   int ret = slice_del(z); /* delete, line 241 */
                if (ret < 0) return ret;
            }
            {   int m_test1 = z->l - z->c; /* test, line 242 */
                if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 131 && z->p[z->c - 1] != 175)) return 0; /* substring, line 242 */
                among_var = find_among_b(z, a_16, 2);
                if (!(among_var)) return 0;
                z->c = z->l - m_test1;
            }
            switch (among_var) { /* among, line 242 */
                case 0: return 0;
                case 1:
                    z->ket = z->c; /* [, line 242 */
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) return 0;
                        z->c = ret; /* next, line 242 */
                    }
                    z->bra = z->c; /* ], line 242 */
                    {   int ret = slice_del(z); /* delete, line 242 */
                        if (ret < 0) return ret;
                    }
                    break;
            }
            break;
        case 2:
            {   int ret = slice_del(z); /* delete, line 245 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_verb_tense_mood(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 249 */
    among_var = find_among_b(z, a_21, 28); /* substring, line 249 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 249 */
    switch (among_var) { /* among, line 249 */
        case 0: return 0;
        case 1:
            {   int m_test1 = z->l - z->c; /* test, line 253 */
                {   int m2 = z->l - z->c; (void)m2; /* not, line 253 */
                    if (z->c - 1 <= z->lb || z->p[z->c - 1] != 133) goto lab0; /* substring, line 253 */
                    if (!(find_among_b(z, a_18, 1))) goto lab0;
                    return 0;
                lab0:
                    z->c = z->l - m2;
                }
                z->c = z->l - m_test1;
            }
            {   int ret = slice_del(z); /* delete, line 254 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int m_test3 = z->l - z->c; /* test, line 258 */
                {   int m4 = z->l - z->c; (void)m4; /* not, line 258 */
                    if (z->c - 5 <= z->lb || z->p[z->c - 1] != 128) goto lab1; /* substring, line 258 */
                    if (!(find_among_b(z, a_19, 2))) goto lab1;
                    return 0;
                lab1:
                    z->c = z->l - m4;
                }
                z->c = z->l - m_test3;
            }
            {   int ret = slice_del(z); /* delete, line 259 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int m_test5 = z->l - z->c; /* test, line 263 */
                {   int m6 = z->l - z->c; (void)m6; /* not, line 263 */
                    if (z->c - 1 <= z->lb || z->p[z->c - 1] != 180) goto lab2; /* substring, line 263 */
                    if (!(find_among_b(z, a_20, 1))) goto lab2;
                    return 0;
                lab2:
                    z->c = z->l - m6;
                }
                z->c = z->l - m_test5;
            }
            {   int ret = slice_del(z); /* delete, line 264 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_del(z); /* delete, line 267 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_del(z); /* delete, line 269 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_verb_stem(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 274 */
    among_var = find_among_b(z, a_23, 16); /* substring, line 274 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 274 */
    switch (among_var) { /* among, line 274 */
        case 0: return 0;
        case 1:
            {   int m_test1 = z->l - z->c; /* test, line 278 */
                {   int m2 = z->l - z->c; (void)m2; /* not, line 278 */
                    if (z->c - 3 <= z->lb || (z->p[z->c - 1] != 128 && z->p[z->c - 1] != 187)) goto lab0; /* substring, line 278 */
                    if (!(find_among_b(z, a_22, 3))) goto lab0;
                    return 0;
                lab0:
                    z->c = z->l - m2;
                }
                z->c = z->l - m_test1;
            }
            {   int ret = slice_del(z); /* delete, line 279 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {   int ret = slice_del(z); /* delete, line 283 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {   int ret = slice_from_s(z, 2, s_18); /* <-, line 284 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {   int ret = slice_from_s(z, 2, s_19); /* <-, line 285 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {   int ret = slice_from_s(z, 2, s_20); /* <-, line 286 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_gerund(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->ket = z->c; /* [, line 291 */
    among_var = find_among_b(z, a_24, 15); /* substring, line 291 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 291 */
    switch (among_var) { /* among, line 291 */
        case 0: return 0;
        case 1:
            {   int ret = slice_del(z); /* delete, line 292 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

extern int kalmyk_UTF_8_stem(struct SN_env * z) { /* forwardmode */
    z->lb = z->c; z->c = z->l; /* backwards, line 304 */

    {   int m1 = z->l - z->c; (void)m1; /* do, line 306 */
        {   int ret = r_noun_possessive(z); /* call noun_possessive, line 306 */
            if (ret == 0) goto lab0;
            if (ret < 0) return ret;
        }
    lab0:
        z->c = z->l - m1;
    }
    {   int m2 = z->l - z->c; (void)m2; /* do, line 307 */
        {   int ret = r_noun_impersonal_possessive(z); /* call noun_impersonal_possessive, line 307 */
            if (ret == 0) goto lab1;
            if (ret < 0) return ret;
        }
    lab1:
        z->c = z->l - m2;
    }
    {   int m3 = z->l - z->c; (void)m3; /* do, line 308 */
        {   int ret = r_noun(z); /* call noun, line 308 */
            if (ret == 0) goto lab2;
            if (ret < 0) return ret;
        }
    lab2:
        z->c = z->l - m3;
    }
    {   int m4 = z->l - z->c; (void)m4; /* do, line 309 */
        {   int ret = r_noun_double_declination(z); /* call noun_double_declination, line 309 */
            if (ret == 0) goto lab3;
            if (ret < 0) return ret;
        }
    lab3:
        z->c = z->l - m4;
    }
    {   int m5 = z->l - z->c; (void)m5; /* do, line 310 */
        {   int ret = r_noun_plural(z); /* call noun_plural, line 310 */
            if (ret == 0) goto lab4;
            if (ret < 0) return ret;
        }
    lab4:
        z->c = z->l - m5;
    }
    {   int m6 = z->l - z->c; (void)m6; /* do, line 311 */
        {   int ret = r_verb_number_person(z); /* call verb_number_person, line 311 */
            if (ret == 0) goto lab5;
            if (ret < 0) return ret;
        }
    lab5:
        z->c = z->l - m6;
    }
    {   int m7 = z->l - z->c; (void)m7; /* do, line 312 */
        {   int ret = r_verb_tense_mood(z); /* call verb_tense_mood, line 312 */
            if (ret == 0) goto lab6;
            if (ret < 0) return ret;
        }
    lab6:
        z->c = z->l - m7;
    }
    {   int m8 = z->l - z->c; (void)m8; /* do, line 313 */
        {   int ret = r_verb_stem(z); /* call verb_stem, line 313 */
            if (ret == 0) goto lab7;
            if (ret < 0) return ret;
        }
    lab7:
        z->c = z->l - m8;
    }
    {   int m9 = z->l - z->c; (void)m9; /* do, line 314 */
        {   int ret = r_gerund(z); /* call gerund, line 314 */
            if (ret == 0) goto lab8;
            if (ret < 0) return ret;
        }
    lab8:
        z->c = z->l - m9;
    }
    z->c = z->lb;
    return 1;
}

extern struct SN_env * kalmyk_UTF_8_create_env(void) { return SN_create_env(0, 0, 0); }

extern void kalmyk_UTF_8_close_env(struct SN_env * z) { SN_close_env(z, 0); }

