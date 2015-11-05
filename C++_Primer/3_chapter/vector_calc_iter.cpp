/*
 * =============================================================================
 *
 *       Filename:  vector_calc_iter.cpp
 *
 *    Description:  calc vector by using iterator
 *
 *     Created on:  2015Äê10ÔÂ20ÈÕ 
 *
 *     Created by:  Int_Null
 *
 * =============================================================================
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> ivec;
    int ival;
        
    cout << "Enter numbers(Ctrl+D to end):" << endl;
    while(cin>>ival)
        ivec.push_back(ival);

    if(ivec.size() == 0){
        cout << "No elements?" << endl;
        return -1;
    }
    cout << "Sum of each pair of adjacent elements in the vector:" << endl;

    vector<int>::size_type cnt =0;
    for(vector<int>::iterator iter = ivec.begin();iter< ivec.end()-1;iter=iter+2){
        cout << *iter + *(iter+1) << "\t";
        ++cnt;
        if(cnt % 6 == 0 )
            cout << endl;
    }

    if(ivec.size()%2 != 0)
        cout << "The last elements is not been summed and the value is "<< *(ivec.end()-1) << endl;
    return 0;
}

