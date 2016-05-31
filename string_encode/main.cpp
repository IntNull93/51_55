/*
 * =============================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *     Created on:  2015Äê12ÔÂ23ÈÕ 
 *
 *     Created by:  root
 *
 * =============================================================================
 */

#include <stdio.h>
#include <string.h>
#include "string_encode.h"

int main(int argc,char * argv[])
{
    int ret=-1;
    CodeStringFile encode;
    ret = encode.EnCodeString(argv[1],argv[2]);
    if(ret != 0){
        printf("Encode Failed!\n");
        return -1;
    }
    ret = -1;
    char pBuffer1[1024] = {0};
    char pBuffer2[1024] = {0};
    CodeStringFile decode;
    ret = decode.DeCodeFile("Encode.dat",pBuffer1,pBuffer2);
    if(ret != 0){
        printf("Decode Failed!\n");
        return -1;
    }
    printf("\n%s\t%s\n",pBuffer1,pBuffer2);
    return 0;
}

