/*
 * =============================================================================
 *
 *       Filename:  111.cpp
 *
 *    Description:  
 *
 *     Created on:  2015��10��23�� 
 *
 *     Created by:  root
 *
 * =============================================================================
 */

#include <iostream>

using namespace std;

int main()
{
    string s1("hehehe");
    string *sp = &s1;
    cout << sp << endl;
    cout << *sp << endl;
    cout << s1 << endl;
    
}

