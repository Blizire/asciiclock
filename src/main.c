/*
 * Author      : Trenton Stiles
 * Date        : 9 September 2020
 * File        : main.c
 * Description : The asciiclock program can print the current time
 *               to the console in a ASCII Image like format.
 *
 *               Asciiclock is a personal project meant to challenge
 *               myself to help relearn C for fun.
 */

#include "main.h"



int main() {
    char *** asc_list;
    WORD     hour;
    WORD     minute;

    SYSTEMTIME local_time;
    GetLocalTime(&local_time);

    hour   = local_time.wHour;
    minute = local_time.wMinute;

    printf("Current LOCAL Time : %d:%d\n",
           hour, minute);

    asc_list = get_asc_list(hour, minute);

    print_time(asc_list);

    free(asc_list);
    return 0;
}
