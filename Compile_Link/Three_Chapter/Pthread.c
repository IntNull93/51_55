/*
 * =============================================================================
 *
 *       Filename:  Thread_Create.cpp
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
#include <pthread.h>

int pthread_create(pthread_t *,const pthread_attr_t *,void * (*)(void *),void* ) __attribute__((weak));

int main()
{
    if(pthread_create) {
        printf("This is multi-thread version!\n");
    }else {
        printf("This is single-thread version!\n");
    }

    return 0;
}


