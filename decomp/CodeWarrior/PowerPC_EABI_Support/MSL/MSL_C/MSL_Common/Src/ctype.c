/* Metrowerks Standard Library
 * CopyrighC 1995-2001 Metrowerks Corporation.  All rights reserved.
 *
 * $Date: 2001/04/27 15:07:49 $
 * $Revision: 1.15 $
 */
 
/*
 *	Routines
 *	--------
 *		isalnum
 *		isalpha
 *		iscntrl
 *		isdigit
 *		isgraph
 *		islower
 *		isprint
 *		ispunct
 *		isspace
 *		isupper
 *		isxdigit
 *		tolower
 *		toupper
 *
 *
 */

/* 
 * Define _INLINE to be a weak symbol. This is used by
 * ctype.h so that the symbols will be defined inside 
 * MSL, as well as being available as an inline for the
 * user. 
 * sw 081601
 */

#define _INLINE __declspec (weak) 
#pragma require_prototypes off
#include <ctype.h>
#pragma require_prototypes reset

#include <stdio.h>

#define ctrl	__control_char
#define motn	__motion_char
#define spac	__space_char
#define punc	__punctuation
#define digi	__digit
#define hexd	__hex_digit
#define lowc	__lower_case
#define uppc	__upper_case
#define dhex	(hexd | digi)
#define uhex	(hexd | uppc)
#define lhex	(hexd | lowc)

unsigned char	__ctype_map[256] = {
/*   -0    -1    -2    -3    -4    -5    -6    -7    -8    -9    -A    -B    -C    -D    -E    -F       */
	ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, motn, motn, motn, motn, motn, ctrl, ctrl, /* 0- */
	ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, ctrl, /* 1- */
	spac, punc, punc, punc, punc, punc, punc, punc, punc, punc, punc, punc, punc, punc, punc, punc, /* 2- */
	dhex, dhex, dhex, dhex, dhex, dhex, dhex, dhex, dhex, dhex, punc, punc, punc, punc, punc, punc, /* 3- */
	punc, uhex, uhex, uhex, uhex, uhex, uhex, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, /* 4- */
	uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, punc, punc, punc, punc, punc, /* 5- */
	punc, lhex, lhex, lhex, lhex, lhex, lhex, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, /* 6- */
	lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, punc, punc, punc, punc, ctrl  /* 7- */
#if __dest_os == __mac_os
	,
	uppc, uppc, uppc, uppc, uppc, uppc, uppc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, /* 8- */
	lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, lowc, /* 9- */
	punc, punc, punc, punc, punc, punc, punc, lowc, punc, punc, punc, punc, punc, punc, uppc, uppc, /* A- */
	punc, punc, punc, punc, punc, punc, punc, punc, punc, punc, punc, punc, punc, punc, lowc, lowc, /* B- */
	punc, punc, punc, punc, punc, punc, punc, punc, punc, punc, spac, uppc, uppc, uppc, uppc, lowc, /* C- */ /*- mm 980603 -*/
	punc, punc, punc, punc, punc, punc, punc, punc, lowc, uppc, punc, punc, punc, punc, lowc, lowc, /* D- */
	punc, punc, punc, punc, punc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, uppc, /* E- */
	punc, uppc, uppc, uppc, uppc, punc, punc, punc, punc, punc, punc, punc, punc, punc, punc, 000   /* F- */
#endif                           /*- mm 970708 -*/
};

unsigned char __lower_map[256] = {
/*   -0    -1    -2    -3    -4    -5    -6    -7    -8    -9    -A    -B    -C    -D    -E    -F       */
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,/* 0- */
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F,/* 1- */
	' ',  '!',  '"',  '#',  '$',  '%',  '&',  '\'', '(',  ')',  '*',  '+',  ',',  '-',  '.',  '/', /* 2- */
	'0',  '1',  '2',  '3',  '4',  '5',  '6',  '7',  '8',  '9',  ':',  ';',  '<',  '=',  '>',  '?', /* 3- */
	'@',  'a',  'b',  'c',  'd',  'e',  'f',  'g',  'h',  'i',  'j',  'k',  'l',  'm',  'n',  'o', /* 4- */
	'p',  'q',  'r',  's',  't',  'u',  'v',  'w',  'x',  'y',  'z',  '[',  '\\', ']',  '^',  '_', /* 5- */
	'`',  'a',  'b',  'c',  'd',  'e',  'f',  'g',  'h',  'i',  'j',  'k',  'l',  'm',  'n',  'o', /* 6- */
	'p',  'q',  'r',  's',  't',  'u',  'v',  'w',  'x',  'y',  'z',  '{',  '|',  '}',  '~',  0x7F,/* 7- */
#if __dest_os == __mac_os
	'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â', /* 8- */
	'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â', /* 9- */
	'Â ',  'Â¡',  'Â¢',  'Â£',  'Â¤',  'Â¥',  'Â¦',  'Â§',  'Â¨', C',  'Âª',  'Â«',  'Â¬',  'Â­',  'Â¾',  'Â¿', /* A- */
	'Â°',  'Â±',  'Â²',  'Â³',  'Â´',  'Âµ',  'Â¶',  'Â·',  'Â¸',  'Â¹',  'Âº',  'Â»',  'Â¼',  'Â½',  'Â¾',  'Â¿', /* B- */
	'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Â',  'Â',  'Â',  'Ã',  'Ã', /* C- */
	'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã', /* D- */
	'Ã ',  'Ã¡',  'Ã¢',  'Ã£',  'Ã¤',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â', /* E- */
	'Ã°',  'Â',  'Â',  'Â',  'Â',  'Ãµ',  'Ã¶',  'Ã·',  'Ã¸',  'Ã¹',  'Ãº',  'Ã»',  'Ã¼',  'Ã½',  'Ã¾',  EOF  /* F- */
#else
	0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F,/* 8- */
	0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F,/* 9- */
	0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF,/* A- */
	0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF,/* B- */
	0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF,/* C- */
	0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7, 0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF,/* D- */
	0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF,/* E- */
	0xF0, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0xFD, 0xFE, 0xFF /* F- */
#endif
};

unsigned char __upper_map[256] = {
/*   -0    -1    -2    -3    -4    -5    -6    -7    -8    -9    -A    -B    -C    -D    -E    -F       */
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,/* 0- */
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F,/* 1- */
	' ',  '!',  '"',  '#',  '$',  '%',  '&',  '\'', '(',  ')',  '*',  '+',  ',',  '-',  '.',  '/', /* 2- */
	'0',  '1',  '2',  '3',  '4',  '5',  '6',  '7',  '8',  '9',  ':',  ';',  '<',  '=',  '>',  '?', /* 3- */
	'@',  'A',  'B',  'C',  'D',  'E',  'F',  'G',  'H',  'I',  'J',  'K',  'L',  'M',  'N',  'O', /* 4- */
	'P',  'Q',  'R',  'S',  'T',  'U',  'V',  'W',  'X',  'Y',  'Z',  '[',  '\\', ']',  '^',  '_', /* 5- */
	'`',  'A',  'B',  'C',  'D',  'E',  'F',  'G',  'H',  'I',  'J',  'K',  'L',  'M',  'N',  'O', /* 6- */
	'P',  'Q',  'R',  'S',  'T',  'U',  'V',  'W',  'X',  'Y',  'Z',  '{',  '|',  '}',  '~',  0x7F,/* 7- */
#if __dest_os == __mac_os
	'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Â',  'Ã§',  'Ã',  'Ã¥',  'Â',  'Ã',  'Â',  'Â',  'Â', C', /* 8- */
	'Ã¦',  'Ã¨',  'Ãª',  'Ã­',  'Ã«',  'Ã¬',  'Â',  'Ã®',  'Ã±',  'Ã¯',  'Â',  'Ã',  'Ã²',  'Ã´',  'Ã³',  'Â', /* 9- */  /*- mm 970922 -*/
	'Â ',  'Â¡',  'Â¢',  'Â£',  'Â¤',  'Â¥',  'Â¦',  'Â§',  'Â¨', C',  'Âª',  'Â«',  'Â¬',  'Â­',  'Â®',  'Â¯', /* A- */
	'Â°',  'Â±',  'Â²',  'Â³',  'Â´',  'Âµ',  'Â¶',  'Â·',  'Â¸',  'Â¹',  'Âº',  'Â»',  'Â¼',  'Â½',  'Â®',  'Â¯', /* B- */
	'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã', /* C- */
	'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã',  'Ã', /* D- */
	'Ã ',  'Ã¡',  'Ã¢',  'Ã£',  'Ã¤',  'Ã¥',  'Ã¦',  'Ã§',  'Ã¨', C',  'Ãª',  'Ã«',  'Ã¬',  'Ã­',  'Ã®',  'Ã¯', /* E- */
	'Ã°',  'Ã±',  'Ã²',  'Ã³',  'Ã´',  'Ãµ',  'Ã¶',  'Ã·',  'Ã¸',  'Ã¹',  'Ãº',  'Ã»',  'Ã¼',  'Ã½',  'Ã¾',  EOF  /* F- */
#else
	0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F,/* 8- */
	0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F,/* 9- */
	0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF,/* A- */
	0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF,/* B- */
	0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF,/* C- */
	0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7, 0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF,/* D- */
	0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF,/* E- */
	0xF0, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0xFD, 0xFE, 0xFF /* F- */
#endif
};


/* Change record:
 * JFH 950607 First code release.
 * JFH 951215 Added definitions for Mac's upper-128 characters - for compatibility
 *			  with old libs.
 * JFH 960122 Bracketed isXXX(), toupper(), and tolower() by #ifndef __cplusplus
 *			  (they are inlined in <ctype.h>).
 * JFH 960213 Changed the __ctype_map entries for 'Ã' (ligature fi) and 'Ã' (ligature fl) (0xDE and 0xDF) to lowc.
 * JFH 960221 Changed the __ctype_map entry for 'Â§' (0xA7) to lowc also.
 * mani970101 Make isprint() do the right thing for characters greater
 *			  than 0x7f.
 * mm  970708 Inserted Be changes
 * mm  970922 Corrected lowercase to uppercase mapping.
 * mm  970925 Added tolower and toupper to allow for detection of EOF character
 * hh  980205 removed __cplusplus
 * MM  980603 Changed __ctype_map so that non-line-breaking space 0xCA is space and not punct.  MW07352
 * mf  000322 definitions of all of these are now inlined inside cctype header
 * cc  000326 removed dest_os to be_os 
 */