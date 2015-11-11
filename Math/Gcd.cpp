/*
 * =============================================================================
 *
 *       Filename:  Gcd.cpp
 *
 *    Description:  
 *
 *     Created on:  2015Äê11ÔÂ11ÈÕ 
 *
 *     Created by:  root
 *
 * =============================================================================
 */

#include <iostream>

using namespace std;

int gcd(int i,int j)
{
    while(j)
    {
        int temp = j;
        j = i%j;
        i = temp;
    }
    return i;
}

int main()
{
    cout << "Input twp values: "<< endl;
    int i,j;
    cin >> i >> j;
    cout << "gcd: " << gcd(i,j) << endl;
    return 0;
}


