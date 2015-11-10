/*
 * =============================================================================
 *
 *       Filename:  string_obj.cpp
 *
 *    Description:  read_serial_string_word and count repeat word
 *
 *     Created on:  2015Äê11ÔÂ10ÈÕ 
 *
 *     Created by:  root
 *
 * =============================================================================
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string preWord,currWord;
    string repWord;

    int currCnt=0,maxCnt=1;

    cout << "Enter some words : "<< endl;

    while(cin >> currWord){
        if(currWord == preWord )
            ++currCnt;
        else{
            if(currCnt > maxCnt){
                maxCnt = currCnt;
                repWord = preWord;
            }
            currCnt = 1;
        }
        preWord = currWord;
    }
    if (currCnt > maxCnt){
        maxCnt = currCnt;
        repWord = preWord;
    }
    if(maxCnt != 1)
        cout << '"' << repWord << '"' << "repeated for " << maxCnt << " times " << endl;
    else
        cout << "There is no repeated word...\n";

    return 0;
}

