/*
 * =============================================================================
 *
 *       Filename:  function.c
 *
 *    Description:  
 *
 *     Created on:  2015Äê12ÔÂ16ÈÕ 
 *
 *     Created by:  root
 *
 * =============================================================================
 */
#include "function.h"
int nCompletionStatus = 0;

float add(float x, float y)
{
    float z = x + y;
    return z;
}

float add_and_multiply(float x, float y)
{
    float z = add(x,y);
    z *= MULTIPLIER;
    return z;
}



