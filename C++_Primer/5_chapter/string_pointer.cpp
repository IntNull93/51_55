/*
 * =============================================================================
 *
 *       Filename:  string_pointer.cpp
 *
 *    Description:  
 *
 *     Created on:  2015Äê11ÔÂ06ÈÕ 
 *
 *     Created by:  root
 *
 * =============================================================================
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string *> spvec;

    string str;
    cout << "Enter some strings :"<<endl;
    while(cin >> str){
        string * pstr = new string;
        * pstr =str;
        spvec.push_back(pstr);
    }

    vector<string *>::iterator iter = spvec.begin();
    while(iter != spvec.end()){
        cout << **iter <<" and size is :" << (**iter).size() << endl;
        iter++;
    }

    iter = spvec.begin();
    while(iter != spvec.end()){
        delete * iter;
        iter++;
    }

    return 0;

}

