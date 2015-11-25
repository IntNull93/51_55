/*
 * =============================================================================
 *
 *       Filename:  Decrypt_Unzip.cpp
 *
 *    Description:  Decrypt and Unzip files
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

int main(int argc,char * argv[])
{
    const char * pFileSrc = argv[1];
    const char * pFileDes = argv[2];

    if(argc != 3){
        cout << "Usage:" << argv[0] << " (Source Filename) " << "(Target Filename)" << endl;
        return -1;
    }

    FILE * fp = NULL;
    fp = fopen(pFileSrc,"rb");
    assert(fp);

    DES_cblock ivec={0};
    DES_cblock key={1,2,3,4,5,6,7,8};
    DES_key_schedule schedule;

    unsigned char * pBufferdate = new unsigned char[MAX_SIZE];
    unsigned char * pBuffertemp = new unsigned char[MAX_SIZE+8];
    unsigned char * pBufferunzip = new unsigned char[MAX_SIZE+8];

    DES_set_key_unchecked(&key,&schedule);
    
    memset(pBufferdate,0,MAX_SIZE);
    memset(pBuffertemp,0,MAX_SIZE+8);
    memset(pBufferunzip,0,MAX_SIZE+8);

    size_t fret = fread(pBufferdate,sizeof(unsigned char),MAX_SIZE-1,fp);

    DES_ncbc_encrypt(pBufferdate,pBuffertemp,fret,&schedule,&ivec,DES_DECRYPT);

    cout << "Decrypt Succeed!"<< endl;

    int i = 0;
    while(1){
        if(pBuffertemp[i]=='\x00' && pBuffertemp[i-1]!='\x00' && pBuffertemp[i+1] == '\x00')
            break;
        i++;
    }
    cout << "i:" << i << endl;
    uLongf UnZipLen = MAX_SIZE+8;
    int ret = uncompress(pBufferunzip,&UnZipLen,pBuffertemp,i-1);

    if(ret != Z_OK){
        cout << "Unzip file Error! ERROR code is:" << ret << endl;
        fclose(fp);
        delete[] pBufferdate;
        delete[] pBuffertemp;
        delete[] pBufferunzip;
        pBufferdate = NULL;
        pBuffertemp = NULL;
        pBufferunzip = NULL;
        return -1;
    }

    cout << "Unzip Succeed!"<< endl;

    FILE * fp2 = NULL;
    fp2 = fopen(pFileDes,"wb");
    assert(fp2);

    fwrite(pBufferunzip,1,UnZipLen,fp2);
    fclose(fp2);

    delete[] pBufferdate;
    delete[] pBuffertemp;
    delete[] pBufferunzip;
    pBufferdate = NULL;
    pBuffertemp = NULL;
    pBufferunzip = NULL;

    return 0;
}
