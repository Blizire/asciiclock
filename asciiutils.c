/*
 * Author      : Trenton Stiles
 * Date        : 9 September 2020
 * File        : asciiutuls.c
 * Description : This file contains the utilities needed in order
 *               to start printing numbers in a time format
 *               to console or to convert local time into ascii
 *               images.
 */

#include "asciiutils.h"

char ** asc_map(int key){
    switch(key) {
        case 0:
            return char_0;
        case 1:
            return char_1;
        case 2:
            return char_2;
        case 3:
            return char_3;
        case 4:
            return char_4;
        case 5:
            return char_5;
        case 6:
            return char_6;
        case 7:
            return char_7;
        case 8:
            return char_8;
        case 9:
            return char_9;
        case 10:
            return char_colon;
    }
}

void print_time(char *** list){
    int asc;
    int row;
    int count;

    /*
     * Always 5 string-image characters too loop over
     * to represent time.
     */
    count = 5;
    /* Print every row. */
    for(row=0; row < ASCMAXROWS; row++){
        /* From every string-image. */
        for(asc=0; asc < count; asc++){
            printf("%s", list[asc][row]);
        }
        putc('\n', stdout);
    }
}

char *** num_asc_conv(WORD time){
    /*
     * Time is implying you pass property of _SYSTEMTIME
     * representing an hour or minute WORD value.
     * Returns an array of string-image variables.
    */

    int      i;
    char     c;
    int      num;
    char *   str_time;
    char *** asc_array;

    str_time  = (char *)calloc(sizeof(char), 3);
    asc_array = (char ***)calloc(sizeof(char **), 2);
    itoa(time, str_time, 10);

    for(i=0; i<3; i++){
        /*
         * If time given is 1-9 there is no padded 0
         * so we explicitly add a padded 0 and single digit number
         * next to it or else we convert time to a string to parse
         * each digit and map it.
         */
        if(time < 10){
            asc_array[0] = asc_map(0);
            asc_array[1] = asc_map(time);
            return asc_array;
        }
        c = str_time[i];
        if( c == '\0'){
            num = 0;
        } else {
            num = c - '0';
        }
        asc_array[i] = asc_map(num);
    }
    free(str_time);
    return asc_array;
}

char *** get_asc_list(WORD hour, WORD minute){
    char *** h_list = num_asc_conv(hour);
    char *** m_list = num_asc_conv(minute);
    char *** list   = (char ***)calloc(sizeof(char **), 5);

    list[0] = h_list[0];
    list[1] = h_list[1];
    list[2] = char_colon;
    list[3] = m_list[0];
    list[4] = m_list[1];

    free(h_list);
    free(m_list);
    return list;
}
