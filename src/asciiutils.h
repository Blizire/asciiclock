/*
 * Author      : Trenton Stiles
 * Date        : 9 September 2020
 * File        : asciiutuls.h
 * Description : This file contains the utilities needed in order
 *               to start printing numbers in a time format
 *               to console or to convert local time into ascii
 *               images.
 */

#ifndef ASCIICLOCK_ASCIIUTILS_H
#define ASCIICLOCK_ASCIIUTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "asciichars.h"

/* Prints the string-image list onto STDOUT. */
void print_time(char *** list);

/* Switch map of integers to return string-image pointer. */
char ** asc_map(int key);

/* Input a WORD and returns array of string-image pointers, uses asc_map(). */
char *** num_asc_conv(WORD time);

/* Get the list of string-images needed for print_time(). */
char *** get_asc_list(WORD hour, WORD minute);

#endif //ASCIICLOCK_ASCIIUTILS_H
