/*
 * Copyright 2024 wtcat
 */
#include "basework/misc/workout_sportsorted.h"

/*
 * Language: ch
 */
struct _ch_sorted_list {
    const uint8_t      *types;
    uint16_t            typecnt;
    uint16_t            itemcnt;
    SportSortedItem     items[24];
};

static const uint8_t ch_lang_types[] = {
	110,
	55,
	7,
	47,
	111,
	77,
	46,
	66,
	67,
	37,
	68,
	112,
	44,
	17,
	101,
	33,
	52,
	36,
	95,
	87,
	113,
	80,
	107,
	114,
	61,
	57,
	69,
	100,
	27,
	115,
	30,
	29,
	138,
	98,
	105,
	40,
	116,
	75,
	64,
	89,
	71,
	117,
	18,
	62,
	14,
	118,
	16,
	0,
	5,
	2,
	119,
	120,
	121,
	122,
	51,
	49,
	91,
	123,
	96,
	124,
	125,
	126,
	25,
	83,
	10,
	41,
	108,
	59,
	48,
	97,
	85,
	35,
	73,
	127,
	54,
	78,
	99,
	76,
	104,
	70,
	128,
	86,
	39,
	12,
	24,
	31,
	58,
	43,
	109,
	72,
	103,
	102,
	28,
	45,
	129,
	34,
	74,
	56,
	94,
	93,
	6,
	1,
	130,
	3,
	88,
	92,
	60,
	50,
	84,
	53,
	131,
	4,
	21,
	82,
	15,
	132,
	133,
	38,
	13,
	81,
	65,
	63,
	90,
	134,
	135,
	136,
	11,
	42,
	20,
	23,
	26,
	9,
	137,
	22,
	106,
	8,
	19,
	32,
	79,

};

static const struct _ch_sorted_list ch_lang_sports = {
    .types    = ch_lang_types,
    .typecnt  = sizeof(ch_lang_types)/sizeof(ch_lang_types[0]),
    .itemcnt  = 24,
    .items    = {
        
        { "à", 1, 0 },
        { "b", 9, 1 },
        { "c", 2, 10 },
        { "m", 1, 12 },
        { "c", 1, 13 },
        { "d", 10, 14 },
        { "f", 6, 24 },
        { "g", 7, 30 },
        { "h", 5, 37 },
        { "H", 1, 42 },
        { "h", 11, 43 },
        { "j", 8, 54 },
        { "k", 3, 62 },
        { "l", 6, 65 },
        { "m", 3, 71 },
        { "p", 11, 74 },
        { "q", 3, 85 },
        { "s", 17, 88 },
        { "t", 12, 105 },
        { "w", 3, 117 },
        { "x", 6, 120 },
        { "y", 9, 126 },
        { "z", 3, 135 },
        { "q", 1, 138 },
    }
};

const SportSortedList *ch_sport_get_sortedlist(void) {
    return (const SportSortedList *)&ch_lang_sports;
}

/*
 * Language: en
 */
struct _en_sorted_list {
    const uint8_t      *types;
    uint16_t            typecnt;
    uint16_t            itemcnt;
    SportSortedItem     items[23];
};

static const uint8_t en_lang_types[] = {
	102,
	105,
	22,
	137,
	44,
	110,
	90,
	55,
	31,
	30,
	107,
	92,
	37,
	47,
	65,
	41,
	111,
	42,
	93,
	94,
	77,
	71,
	66,
	7,
	121,
	19,
	16,
	125,
	135,
	36,
	106,
	57,
	13,
	95,
	115,
	108,
	15,
	127,
	91,
	101,
	61,
	116,
	40,
	84,
	45,
	18,
	4,
	43,
	29,
	62,
	33,
	58,
	67,
	118,
	6,
	1,
	3,
	126,
	130,
	96,
	53,
	25,
	83,
	128,
	70,
	100,
	32,
	97,
	50,
	81,
	73,
	122,
	52,
	5,
	119,
	2,
	0,
	10,
	24,
	85,
	12,
	26,
	78,
	89,
	27,
	86,
	34,
	9,
	133,
	138,
	109,
	76,
	72,
	14,
	134,
	23,
	117,
	88,
	28,
	8,
	69,
	68,
	114,
	46,
	64,
	59,
	48,
	80,
	63,
	103,
	49,
	51,
	136,
	21,
	132,
	98,
	54,
	87,
	120,
	56,
	75,
	113,
	38,
	60,
	35,
	82,
	39,
	112,
	20,
	17,
	131,
	124,
	99,
	129,
	74,
	123,
	104,
	11,
	79,

};

static const struct _en_sorted_list en_lang_sports = {
    .types    = en_lang_types,
    .typecnt  = sizeof(en_lang_types)/sizeof(en_lang_types[0]),
    .itemcnt  = 23,
    .items    = {
        
        { "A", 6, 0 },
        { "B", 15, 6 },
        { "C", 10, 21 },
        { "D", 5, 31 },
        { "E", 2, 36 },
        { "F", 4, 38 },
        { "G", 2, 42 },
        { "H", 8, 44 },
        { "I", 7, 52 },
        { "J", 3, 59 },
        { "K", 5, 62 },
        { "L", 2, 67 },
        { "M", 4, 69 },
        { "O", 5, 73 },
        { "P", 11, 78 },
        { "R", 6, 89 },
        { "S", 27, 95 },
        { "T", 9, 122 },
        { "U", 1, 131 },
        { "V", 1, 132 },
        { "W", 4, 133 },
        { "Y", 1, 137 },
        { "O", 1, 138 },
    }
};

const SportSortedList *en_sport_get_sortedlist(void) {
    return (const SportSortedList *)&en_lang_sports;
}

/*
 * Language: ge
 */
struct _ge_sorted_list {
    const uint8_t      *types;
    uint16_t            typecnt;
    uint16_t            itemcnt;
    SportSortedItem     items[24];
};

static const uint8_t ge_lang_types[] = {
	101,
	105,
	19,
	22,
	137,
	44,
	110,
	90,
	92,
	31,
	55,
	34,
	107,
	37,
	47,
	63,
	41,
	111,
	42,
	76,
	93,
	102,
	94,
	77,
	66,
	7,
	15,
	125,
	57,
	100,
	108,
	64,
	67,
	61,
	8,
	91,
	49,
	134,
	10,
	5,
	116,
	40,
	84,
	123,
	56,
	122,
	16,
	43,
	45,
	29,
	62,
	25,
	18,
	118,
	3,
	1,
	130,
	126,
	6,
	96,
	83,
	76,
	26,
	82,
	28,
	71,
	121,
	70,
	128,
	81,
	133,
	97,
	50,
	106,
	35,
	30,
	27,
	131,
	0,
	112,
	73,
	119,
	2,
	85,
	12,
	78,
	24,
	89,
	86,
	138,
	58,
	129,
	72,
	109,
	127,
	33,
	14,
	23,
	68,
	69,
	59,
	46,
	114,
	21,
	48,
	80,
	103,
	117,
	88,
	53,
	132,
	115,
	51,
	75,
	87,
	120,
	98,
	63,
	113,
	9,
	38,
	60,
	13,
	82,
	39,
	20,
	54,
	36,
	17,
	124,
	99,
	95,
	4,
	74,
	136,
	104,
	11,
	135,
	79,

};

static const struct _ge_sorted_list ge_lang_sports = {
    .types    = ge_lang_types,
    .typecnt  = sizeof(ge_lang_types)/sizeof(ge_lang_types[0]),
    .itemcnt  = 24,
    .items    = {
        
        { "A", 7, 0 },
        { "B", 17, 7 },
        { "C", 4, 24 },
        { "D", 3, 28 },
        { "E", 2, 31 },
        { "F", 8, 33 },
        { "G", 6, 41 },
        { "H", 6, 47 },
        { "I", 6, 53 },
        { "J", 1, 59 },
        { "K", 11, 60 },
        { "L", 9, 71 },
        { "M", 1, 80 },
        { "O", 2, 81 },
        { "P", 6, 83 },
        { "R", 8, 89 },
        { "S", 23, 97 },
        { "T", 9, 120 },
        { "U", 1, 129 },
        { "V", 2, 130 },
        { "W", 4, 132 },
        { "Y", 1, 136 },
        { "Z", 1, 137 },
        { "A", 1, 138 },
    }
};

const SportSortedList *ge_sport_get_sortedlist(void) {
    return (const SportSortedList *)&ge_lang_sports;
}

/*
 * Language: fr
 */
struct _fr_sorted_list {
    const uint8_t      *types;
    uint16_t            typecnt;
    uint16_t            itemcnt;
    SportSortedItem     items[23];
};

static const uint8_t fr_lang_types[] = {
	72,
	52,
	131,
	81,
	122,
	132,
	90,
	31,
	55,
	92,
	107,
	37,
	47,
	33,
	65,
	41,
	42,
	93,
	94,
	34,
	95,
	30,
	71,
	109,
	7,
	66,
	100,
	121,
	71,
	20,
	112,
	5,
	1,
	6,
	0,
	133,
	108,
	13,
	51,
	56,
	98,
	91,
	76,
	15,
	111,
	130,
	137,
	125,
	135,
	126,
	116,
	16,
	18,
	61,
	8,
	57,
	22,
	44,
	110,
	119,
	17,
	40,
	84,
	115,
	43,
	45,
	62,
	123,
	67,
	96,
	70,
	128,
	83,
	32,
	97,
	63,
	129,
	50,
	73,
	36,
	14,
	2,
	3,
	54,
	29,
	9,
	10,
	85,
	101,
	12,
	78,
	24,
	27,
	59,
	64,
	86,
	138,
	4,
	118,
	23,
	19,
	104,
	88,
	117,
	68,
	28,
	46,
	114,
	21,
	48,
	105,
	80,
	75,
	106,
	87,
	120,
	25,
	53,
	136,
	113,
	134,
	127,
	77,
	103,
	38,
	60,
	26,
	102,
	82,
	39,
	21,
	124,
	69,
	49,
	99,
	74,
	11,
	58,
	79,

};

static const struct _fr_sorted_list fr_lang_sports = {
    .types    = fr_lang_types,
    .typecnt  = sizeof(fr_lang_types)/sizeof(fr_lang_types[0]),
    .itemcnt  = 23,
    .items    = {
        
        { "A", 6, 0 },
        { "B", 16, 6 },
        { "C", 15, 22 },
        { "D", 4, 37 },
        { "E", 12, 41 },
        { "F", 8, 53 },
        { "G", 3, 61 },
        { "H", 5, 64 },
        { "J", 1, 69 },
        { "K", 4, 70 },
        { "L", 4, 74 },
        { "M", 7, 78 },
        { "N", 2, 85 },
        { "P", 9, 87 },
        { "R", 6, 96 },
        { "S", 21, 102 },
        { "T", 8, 123 },
        { "U", 1, 131 },
        { "V", 3, 132 },
        { "W", 1, 135 },
        { "Y", 1, 136 },
        { "É", 1, 137 },
        { "A", 1, 138 },
    }
};

const SportSortedList *fr_sport_get_sortedlist(void) {
    return (const SportSortedList *)&fr_lang_sports;
}

/*
 * Language: sp
 */
struct _sp_sorted_list {
    const uint8_t      *types;
    uint16_t            typecnt;
    uint16_t            itemcnt;
    SportSortedItem     items[23];
};

static const uint8_t sp_lang_types[] = {
	102,
	105,
	22,
	137,
	44,
	110,
	90,
	55,
	31,
	30,
	107,
	92,
	37,
	47,
	65,
	41,
	111,
	42,
	93,
	94,
	77,
	71,
	66,
	7,
	121,
	19,
	16,
	125,
	135,
	36,
	106,
	57,
	13,
	95,
	115,
	108,
	15,
	127,
	91,
	101,
	61,
	116,
	40,
	84,
	45,
	18,
	4,
	43,
	29,
	62,
	33,
	58,
	67,
	118,
	6,
	1,
	3,
	126,
	130,
	96,
	53,
	25,
	83,
	128,
	70,
	100,
	32,
	97,
	50,
	81,
	73,
	122,
	52,
	5,
	119,
	2,
	0,
	10,
	24,
	85,
	12,
	26,
	78,
	89,
	27,
	86,
	34,
	9,
	133,
	138,
	109,
	76,
	72,
	14,
	134,
	23,
	117,
	88,
	28,
	8,
	69,
	68,
	114,
	46,
	64,
	59,
	48,
	80,
	63,
	103,
	49,
	51,
	136,
	21,
	132,
	98,
	54,
	87,
	120,
	56,
	75,
	113,
	38,
	60,
	35,
	82,
	39,
	112,
	20,
	17,
	131,
	124,
	99,
	129,
	74,
	123,
	104,
	11,
	79,

};

static const struct _sp_sorted_list sp_lang_sports = {
    .types    = sp_lang_types,
    .typecnt  = sizeof(sp_lang_types)/sizeof(sp_lang_types[0]),
    .itemcnt  = 23,
    .items    = {
        
        { "A", 6, 0 },
        { "B", 15, 6 },
        { "C", 10, 21 },
        { "D", 5, 31 },
        { "E", 2, 36 },
        { "F", 4, 38 },
        { "G", 2, 42 },
        { "H", 8, 44 },
        { "I", 7, 52 },
        { "J", 3, 59 },
        { "K", 5, 62 },
        { "L", 2, 67 },
        { "M", 4, 69 },
        { "O", 5, 73 },
        { "P", 11, 78 },
        { "R", 6, 89 },
        { "S", 27, 95 },
        { "T", 9, 122 },
        { "U", 1, 131 },
        { "V", 1, 132 },
        { "W", 4, 133 },
        { "Y", 1, 137 },
        { "O", 1, 138 },
    }
};

const SportSortedList *sp_sport_get_sortedlist(void) {
    return (const SportSortedList *)&sp_lang_sports;
}

/*
 * Language: jp
 */
struct _jp_sorted_list {
    const uint8_t      *types;
    uint16_t            typecnt;
    uint16_t            itemcnt;
    SportSortedItem     items[22];
};

static const uint8_t jp_lang_types[] = {
	131,
	23,
	81,
	122,
	132,
	133,
	90,
	13,
	92,
	37,
	55,
	31,
	107,
	47,
	65,
	42,
	41,
	45,
	56,
	98,
	30,
	95,
	33,
	71,
	7,
	66,
	109,
	121,
	35,
	80,
	20,
	112,
	6,
	3,
	1,
	0,
	5,
	2,
	108,
	57,
	26,
	136,
	127,
	134,
	117,
	88,
	15,
	91,
	76,
	58,
	105,
	106,
	137,
	21,
	76,
	130,
	125,
	16,
	135,
	126,
	17,
	116,
	18,
	8,
	61,
	27,
	93,
	22,
	44,
	110,
	119,
	40,
	84,
	115,
	43,
	62,
	67,
	96,
	70,
	128,
	83,
	32,
	97,
	50,
	129,
	123,
	52,
	73,
	14,
	9,
	10,
	101,
	85,
	12,
	78,
	24,
	34,
	86,
	118,
	59,
	64,
	113,
	72,
	89,
	138,
	29,
	19,
	104,
	68,
	46,
	114,
	48,
	28,
	87,
	120,
	4,
	51,
	36,
	75,
	25,
	54,
	53,
	77,
	103,
	38,
	63,
	60,
	82,
	102,
	39,
	124,
	69,
	49,
	99,
	100,
	94,
	74,
	11,
	79,

};

static const struct _jp_sorted_list jp_lang_sports = {
    .types    = jp_lang_types,
    .typecnt  = sizeof(jp_lang_types)/sizeof(jp_lang_types[0]),
    .itemcnt  = 22,
    .items    = {
        
        { "A", 6, 0 },
        { "B", 17, 6 },
        { "C", 16, 23 },
        { "D", 5, 39 },
        { "E", 19, 44 },
        { "F", 8, 63 },
        { "G", 3, 71 },
        { "H", 3, 74 },
        { "J", 1, 77 },
        { "K", 4, 78 },
        { "L", 4, 82 },
        { "M", 3, 86 },
        { "N", 2, 89 },
        { "P", 11, 91 },
        { "R", 6, 102 },
        { "S", 15, 108 },
        { "T", 7, 123 },
        { "U", 1, 130 },
        { "V", 5, 131 },
        { "W", 1, 136 },
        { "Y", 1, 137 },
        { "O", 1, 138 },
    }
};

const SportSortedList *jp_sport_get_sortedlist(void) {
    return (const SportSortedList *)&jp_lang_sports;
}

/*
 * Language: ru
 */
struct _ru_sorted_list {
    const uint8_t      *types;
    uint16_t            typecnt;
    uint16_t            itemcnt;
    SportSortedItem     items[24];
};

static const uint8_t ru_lang_types[] = {
	124,
	52,
	22,
	44,
	137,
	110,
	90,
	31,
	55,
	129,
	37,
	63,
	47,
	107,
	92,
	41,
	42,
	111,
	0,
	1,
	112,
	35,
	81,
	99,
	74,
	6,
	58,
	127,
	100,
	5,
	18,
	40,
	109,
	72,
	89,
	45,
	84,
	117,
	105,
	121,
	128,
	33,
	96,
	57,
	95,
	115,
	108,
	136,
	130,
	126,
	11,
	121,
	83,
	7,
	128,
	66,
	82,
	16,
	125,
	59,
	64,
	88,
	97,
	50,
	131,
	106,
	36,
	73,
	39,
	62,
	27,
	23,
	85,
	78,
	24,
	86,
	12,
	28,
	4,
	26,
	49,
	69,
	93,
	29,
	94,
	53,
	54,
	34,
	9,
	113,
	53,
	10,
	2,
	25,
	138,
	101,
	118,
	134,
	104,
	46,
	114,
	63,
	68,
	48,
	21,
	103,
	80,
	87,
	98,
	120,
	76,
	75,
	132,
	102,
	56,
	122,
	19,
	60,
	13,
	38,
	82,
	20,
	51,
	123,
	14,
	61,
	8,
	91,
	133,
	119,
	116,
	17,
	43,
	67,
	3,
	135,
	30,
	15,
	79,

};

static const struct _ru_sorted_list ru_lang_sports = {
    .types    = ru_lang_types,
    .typecnt  = sizeof(ru_lang_types)/sizeof(ru_lang_types[0]),
    .itemcnt  = 24,
    .items    = {
        
        { "А", 6, 0 },
        { "Б", 17, 6 },
        { "В", 8, 23 },
        { "Г", 11, 31 },
        { "Д", 5, 42 },
        { "З", 2, 47 },
        { "И", 1, 49 },
        { "Й", 1, 50 },
        { "К", 10, 51 },
        { "Л", 6, 61 },
        { "М", 1, 67 },
        { "Н", 1, 68 },
        { "О", 2, 69 },
        { "П", 23, 71 },
        { "Р", 5, 94 },
        { "С", 18, 99 },
        { "Т", 8, 117 },
        { "Ф", 7, 125 },
        { "X", 2, 132 },
        { "Х", 1, 134 },
        { "Ц", 1, 135 },
        { "Ш", 1, 136 },
        { "Э", 1, 137 },
        { "Д", 1, 138 },
    }
};

const SportSortedList *ru_sport_get_sortedlist(void) {
    return (const SportSortedList *)&ru_lang_sports;
}

/*
 * Language: po
 */
struct _po_sorted_list {
    const uint8_t      *types;
    uint16_t            typecnt;
    uint16_t            itemcnt;
    SportSortedItem     items[22];
};

static const uint8_t po_lang_types[] = {
	131,
	23,
	81,
	122,
	132,
	133,
	90,
	13,
	92,
	37,
	55,
	31,
	107,
	47,
	65,
	42,
	41,
	45,
	56,
	98,
	30,
	95,
	33,
	71,
	7,
	66,
	109,
	121,
	35,
	80,
	20,
	112,
	6,
	3,
	1,
	0,
	5,
	2,
	108,
	57,
	26,
	136,
	127,
	134,
	117,
	88,
	15,
	91,
	76,
	58,
	105,
	106,
	137,
	21,
	76,
	130,
	125,
	16,
	135,
	126,
	17,
	116,
	18,
	8,
	61,
	27,
	93,
	22,
	44,
	110,
	119,
	40,
	84,
	115,
	43,
	62,
	67,
	96,
	70,
	128,
	83,
	32,
	97,
	50,
	129,
	123,
	52,
	73,
	14,
	9,
	10,
	101,
	85,
	12,
	78,
	24,
	34,
	86,
	118,
	59,
	64,
	113,
	72,
	89,
	138,
	29,
	19,
	104,
	68,
	46,
	114,
	48,
	28,
	87,
	120,
	4,
	51,
	36,
	75,
	25,
	54,
	53,
	77,
	103,
	38,
	63,
	60,
	82,
	102,
	39,
	124,
	69,
	49,
	99,
	100,
	94,
	74,
	11,
	79,

};

static const struct _po_sorted_list po_lang_sports = {
    .types    = po_lang_types,
    .typecnt  = sizeof(po_lang_types)/sizeof(po_lang_types[0]),
    .itemcnt  = 22,
    .items    = {
        
        { "A", 6, 0 },
        { "B", 17, 6 },
        { "C", 16, 23 },
        { "D", 5, 39 },
        { "E", 19, 44 },
        { "F", 8, 63 },
        { "G", 3, 71 },
        { "H", 3, 74 },
        { "J", 1, 77 },
        { "K", 4, 78 },
        { "L", 4, 82 },
        { "M", 3, 86 },
        { "N", 2, 89 },
        { "P", 11, 91 },
        { "R", 6, 102 },
        { "S", 15, 108 },
        { "T", 7, 123 },
        { "U", 1, 130 },
        { "V", 5, 131 },
        { "W", 1, 136 },
        { "Y", 1, 137 },
        { "O", 1, 138 },
    }
};

const SportSortedList *po_sport_get_sortedlist(void) {
    return (const SportSortedList *)&po_lang_sports;
}

/*
 * Language: it
 */
struct _it_sorted_list {
    const uint8_t      *types;
    uint16_t            typecnt;
    uint16_t            itemcnt;
    SportSortedItem     items[21];
};

static const uint8_t it_lang_types[] = {
	100,
	52,
	23,
	76,
	81,
	132,
	122,
	131,
	125,
	16,
	130,
	135,
	111,
	126,
	17,
	116,
	18,
	65,
	90,
	37,
	55,
	92,
	107,
	47,
	30,
	42,
	56,
	109,
	8,
	71,
	121,
	7,
	66,
	72,
	1,
	112,
	6,
	0,
	110,
	93,
	5,
	20,
	3,
	133,
	13,
	95,
	15,
	58,
	137,
	61,
	27,
	57,
	22,
	119,
	44,
	40,
	84,
	115,
	29,
	108,
	43,
	62,
	67,
	96,
	70,
	128,
	83,
	82,
	129,
	97,
	50,
	73,
	9,
	10,
	85,
	101,
	24,
	12,
	89,
	78,
	31,
	34,
	99,
	86,
	39,
	45,
	74,
	59,
	64,
	41,
	118,
	94,
	2,
	138,
	104,
	19,
	117,
	88,
	68,
	28,
	63,
	46,
	114,
	48,
	91,
	80,
	105,
	21,
	75,
	87,
	120,
	106,
	51,
	25,
	54,
	98,
	127,
	134,
	136,
	53,
	36,
	33,
	123,
	77,
	113,
	103,
	38,
	60,
	26,
	4,
	82,
	35,
	102,
	124,
	69,
	49,
	14,
	11,
	79,

};

static const struct _it_sorted_list it_lang_sports = {
    .types    = it_lang_types,
    .typecnt  = sizeof(it_lang_types)/sizeof(it_lang_types[0]),
    .itemcnt  = 21,
    .items    = {
        
        { "A", 17, 0 },
        { "B", 10, 17 },
        { "C", 17, 27 },
        { "D", 2, 44 },
        { "E", 3, 46 },
        { "F", 6, 49 },
        { "G", 5, 55 },
        { "H", 3, 60 },
        { "J", 1, 63 },
        { "K", 4, 64 },
        { "L", 3, 68 },
        { "M", 1, 71 },
        { "N", 2, 72 },
        { "P", 19, 74 },
        { "R", 3, 93 },
        { "S", 29, 96 },
        { "T", 8, 125 },
        { "U", 1, 133 },
        { "V", 3, 134 },
        { "Y", 1, 137 },
        { "A", 1, 138 },
    }
};

const SportSortedList *it_sport_get_sortedlist(void) {
    return (const SportSortedList *)&it_lang_sports;
}
