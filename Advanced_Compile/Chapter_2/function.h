/*
 * =============================================================================
 *
 *       Filename:  function.h
 *
 *    Description:  
 *
 *     Created on:  2015��12��16�� 
 *
 *     Created by:  root 
 *
 * =============================================================================
 */

#pragma once

#define FIRST_OPTION
#ifdef FIRST_OPTION
#define MULTIPLIER (3.0)
#else
#define MULTIPLIER (2.0)
#endif

float add_and_multiply(float x, float y);


