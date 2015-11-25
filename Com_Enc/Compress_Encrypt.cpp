/*
 * =============================================================================
 *
 *       Filename:  Compress_Encrypt.cpp
 *
 *    Description:  Compress and Encrypt files
 *
 *     Created on:  2015Äê11ÔÂ24ÈÕ 
 *
 *     Created by:  luokj
 *
 * =============================================================================
 */

#include <iostream>
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "zlib.h"
#include "des.h"
#include "des_crypt.h"

#define MAX_SIZE 1024*1024

using namespace std;

int main(int argc, char * argv[])
{
    const char * pFileSrc = argv[1];
    const char * pFileDes = argv[2];
    
    if(argc != 3){
        cout << "Usage:" << argv[0] << " (Source Filename) " << "(Target Filename)" << endl;
        return -1;
    }
    
    uLongf DesLen;
    int len=0;
    DES_cblock ivec={0};
    DES_cblock key={1,2,3,4,5,6,7,8};
    DES_key_schedule schedule;

    FILE * fp = NULL;
    fp = fopen(pFileSrc,"rb");
    assert(fp);

    unsigned char * pBufferSrc = new unsigned char[MAX_SIZE];
    unsigned char * pBufferCom = new unsigned char[MAX_SIZE];
    unsigned char * pBufferEnc = new unsigned char[MAX_SIZE+8];

    memset(pBufferSrc,0,MAX_SIZE);
    memset(pBufferCom,0,MAX_SIZE);
    memset(pBufferEnc,0,MAX_SIZE+8);

    size_t fret = fread(pBufferSrc,sizeof(unsigned char),MAX_SIZE-1,fp);
    uLong file_size = (uLong)fret;

    int ret = compress(pBufferCom,&DesLen,pBufferSrc,file_size);

    if(ret != Z_OK){
        cout <<"Commpress file Error! The Error code is:" << ret << endl;
        fclose(fp);
        delete[] pBufferSrc;
        pBufferSrc = NULL;
        delete[] pBufferCom;
        pBufferCom = NULL;
        delete[] pBufferEnc;
        pBufferEnc = NULL;
        return -1;
    }

    cout << "Compress Succeed!"<< endl;

    DES_set_key_unchecked(&key,&schedule);

    unsigned char ch = '\x00';
    if(DesLen%8 != 0){
        len = 8 - DesLen%8;
        ch = len;
        memset(pBufferCom+DesLen,ch,len);
    }

    DES_ncbc_encrypt(pBufferCom,pBufferEnc,DesLen+1,&schedule,&ivec,DES_ENCRYPT);
    
    cout << "Encrypt Succeed!"<< endl;
    FILE * fp2 = NULL;
    fp2 = fopen(pFileDes,"wb");
    fwrite(pBufferEnc,sizeof(unsigned char),DesLen+len,fp2);
    fclose(fp2);

    delete[] pBufferSrc;
    pBufferSrc = NULL;
    delete[] pBufferCom;
    pBufferCom = NULL;
    delete[] pBufferEnc;
    pBufferEnc = NULL;

    return 0;

}
