/*
 * =============================================================================
 *
 *       Filename:  string_encode.cpp
 *
 *    Description:  
 *
 *     Created on:  2015Äê12ÔÂ23ÈÕ 
 *
 *     Created by:  root
 *
 * =============================================================================
 */

#include "string_encode.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>

#define MAX_STRING_SIZE 1024*10

CodeStringFile::CodeStringFile()
{

}

CodeStringFile::~CodeStringFile()
{

}

int CodeStringFile::EnCodeString(const char * src_1st,const char * src_2nd)
{
    char keysbuf[1024] = {0};
    char ivecbuf[1024] = {0};

    for(int i = 0 ; i < (int)strlen(src_1st);i++){
        char tmp = (((src_1st[i] ^ 0x9c)^0x8d)^0x5e);
        sprintf(keysbuf+i*2,"%2.2x",tmp);
    }
 
    for(int i = 0 ; i < (int)strlen(src_2nd);i++){
        char tmp = (((src_2nd[i] ^ 0x9c)^0x8d)^0x5e);
        sprintf(ivecbuf+i*2,"%2.2x",tmp);
    }
    
    FILE * fp = NULL;
    if((fp=fopen("Encode.dat","wb")) == NULL){
        printf("Create the Encode file Error!");
        return -1;
    }
    fprintf(fp,"%s\n",keysbuf);
    fprintf(fp,"%s\n",ivecbuf);
    fclose(fp);
    return 0;
}


char CodeStringFile::Schar2Cchar(char ch)
{
    if(ch >= '0' && ch <= '9')
        return (ch - '0');
    else if(ch >= 'A' && ch <= 'F')
        return (ch - 'A' + '\x0A');
    else if(ch >= 'a' && ch <= 'f')
        return (ch - 'a' + '\x0a');
}

int CodeStringFile::DeCodeFile(const char * Filename,char * pBufferFir,char * pBufferSec)
{
    char keysbuf[1024] = {0};
    char ivecbuf[1024] = {0};

    FILE * fp = NULL;
    if((fp=fopen(Filename,"r"))==NULL){
        printf("open the encode file error");
        return -1;
    }
    
    fscanf(fp,"%s\n",keysbuf);
    fscanf(fp,"%s\n",ivecbuf);

    for(int i =0;i<((int)strlen(keysbuf))/2;i++){ 
        char tmp = (Schar2Cchar(keysbuf[i*2])<<4) + Schar2Cchar(keysbuf[i*2+1]);
        tmp= (((tmp ^ 0x5e)^0x8d)^0x9c);
        pBufferFir[i] = tmp;
    }

    for(int i = 0;i<((int)strlen(ivecbuf))/2;i++){
        char tmp = (Schar2Cchar(ivecbuf[i*2])<<4) + Schar2Cchar(ivecbuf[i*2+1]);
        tmp= (((tmp ^ 0x5e)^0x8d)^0x9c);
        pBufferSec[i] = tmp;
        }
    return 0;
}
