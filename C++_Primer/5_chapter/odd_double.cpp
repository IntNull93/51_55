/*
 * =============================================================================
 *
 *       Filename:  odd_double.cpp
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
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(12,3);

    for(vector<int>::iterator iter=ivec.begin();iter!=ivec.end();++iter)
        cout << *iter << " " ;
    cout << endl;
    for(vector<int>::iterator iter = ivec.begin();iter!=ivec.end();++iter)
        *iter = (*iter % 2 == 0 ? *iter : *iter *2);

    for(vector<int>::iterator iter=ivec.begin();iter!=ivec.end();++iter)
        cout << *iter << " " ;
    cout << endl;

    return 0;
}

