/*
 * =============================================================================
 *
 *       Filename:  SimpleSection.c
 *
 *    Description:  
 *
 *     Created on:  2015��12��29�� 
 *
 *     Created by:  root
 *
 * =============================================================================
 */
#include <stdio.h>

int printf(const char * format, ... );

int global_init_var = 84;
int global_uninit_var;

void func(int i)
{
    printf("%d\n",i);
}

int main(void)
{
    static int static_var = 85;
    static int static_var2;

    int a = 1;
    int b;

    func(static_var + static_var2 + a + b);

    return 0;
}

