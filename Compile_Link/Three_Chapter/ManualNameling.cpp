/*
 * =============================================================================
 *
 *       Filename:  ManualNameling.cpp
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

namespace myname{
    int var = 42;
}

extern  "C" double  _ZN6myname3varE;

int main()
{
    printf("%d\n",_ZN6myname3varE);
    return 0;
}

