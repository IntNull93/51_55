/*
 * =============================================================================
 *
 *       Filename:  template_absolute.cpp
 *
 *    Description:  return absolute of num
 *
 *     Created on:  2015Äê11ÔÂ02ÈÕ 
 *
 *     Created by:  luokj
 *
 * =============================================================================
 */

#include <iostream>

using namespace std;

template <typename T>
T absVal(T val)
{
    return val > 0 ? val : -val;
}

int main()
{
    double aaa = 0.88;
    float bbb = -12.3;

    cout << absVal(-3) << endl;
    cout << absVal(aaa) << endl;
    cout << absVal(bbb) << endl;

    return 0;
}

