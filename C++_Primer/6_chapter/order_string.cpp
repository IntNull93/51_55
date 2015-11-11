/*
 * =============================================================================
 *
 *       Filename:  order_string.cpp
 *
 *    Description:  select the smaller vector by dic order
 *
 *     Created on:  2015Äê11ÔÂ11ÈÕ 
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
    string str1,str2,str3;

    do{
        cout << "Enter two strings:"<< endl;
        cin >> str1 >> str2;
        if(str1 < str2)
            cout << "The first string is smaller than the second one" << endl;
        else if(str1 == str2)
            cout << "Two strings are equal"<< endl;
        else
            cout << "The second string is smaller than the first one" << endl;
        cout << "Continue?(y-yes,n-no)"<< endl;
        cin >> str3;
    }while(str3[0] != 'n' && str3[0] != 'N');
    return 0;
}


