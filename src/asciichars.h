/*
 * Author      : Trenton Stiles
 * Date        : 9 September 2020
 * File        : asciichars.h
 * Description : Contains variables that represent a "string-image" of every
 *               numeric number needed in order to represent time in 24hr format.
 */

#ifndef ASCIICLOCK_ASCIICHARS_H
#define ASCIICLOCK_ASCIICHARS_H

/* Max length of the string-image array can be */
#define ASCMAXLEN  9

/* The amount of rows each string-image uses up */
#define ASCMAXROWS 5

char * char_0[ASCMAXLEN];
char * char_1[ASCMAXLEN];
char * char_2[ASCMAXLEN];
char * char_3[ASCMAXLEN];
char * char_4[ASCMAXLEN];
char * char_5[ASCMAXLEN];
char * char_6[ASCMAXLEN];
char * char_7[ASCMAXLEN];
char * char_8[ASCMAXLEN];
char * char_9[ASCMAXLEN];
char * char_colon[ASCMAXLEN];

#endif //ASCIICLOCK_ASCIICHARS_H
