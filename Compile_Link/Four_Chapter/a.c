/*
 * =============================================================================
 *
 *       Filename:  a.c
 *
 *    Description:  
 *
 *     Created on:  2016Äê01ÔÂ04ÈÕ 
 *
 *     Created by:  root
 *
 * =============================================================================
 */

#include <stdio.h>

extern int shared;

int main()
{
    int a = 100;
    swap(&a,&shared);

    return 0;
}

