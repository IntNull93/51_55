/*
 * =============================================================================
 *
 *       Filename:  vec2vec.cpp
 *
 *    Description:  push the value of vector to another vector
 *
 *     Created on:  2015Äê10ÔÂ23ÈÕ 
 *
 *     Created by:  Luokj
 *
 * =============================================================================
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10,20);
    vector<int> ivec2;

    for(vector<int>::iterator iter = ivec.begin();iter != ivec.end();++iter){
        ivec2.push_back(*iter);
        cout << *iter << endl;
    }
}

