/*
 * =============================================================================
 *
 *       Filename:  Stack_Death.c
 *
 *    Description:  Stack Make The endless loop
 *
 *     Created on:  2015Äê10ÔÂ30ÈÕ 
 *
 *     Created by:  luokj
 *
 * =============================================================================
 */
#include <stdio.h>

int main()
{
    int m=1;
    int i =0;
    int k[10] = {0};
    printf("&m=%d\n",&m);
    printf("&i=%d\n",&i);
    printf("&k[0]=%d\n",&k[0]);
    printf("&k[9]=%d\n",&k[9]);
    printf("&k[10]=%d\n",&k[10]);

    for(;i <= 10; ++i)
    {
        k[i] = 0;
    }
    printf("HelloWorld!\n");
}


