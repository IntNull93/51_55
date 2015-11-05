/*
 * =============================================================================
 *
 *       Filename:  template_ostream.cpp
 *
 *    Description:  
 *
 *     Created on:  2015年11月02日 
 *
 *     Created by:  root
 *
 * =============================================================================
 */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

template <typename T1,typename T2>
T1 & print(T1 & s, T2 val)
{
    s << val;
    return s;
}

int main()
{
    double dval = 0.88;
    float fval = -12.3;
    string oristr = "Hello World!!!!",desstr;
    ostringstream oss(desstr);
    ofstream outFile("result.dat");

    //写至cout
    print(cout,-3) << endl;
    print(cout,dval) << endl;
    print(cout,fval) << endl;
    print(cout,oristr) << endl;

    //写至file
    print(outFile,-3) << endl;
    print(outFile,dval) << endl;
    print(outFile,fval) << endl;
    print(outFile,oristr) << endl;
    outFile.close();

    //写至stringstream
    print(oss,-3) << endl;
    print(oss,dval) << endl;
    print(oss,fval) << endl;
    print(oss,oristr) << endl;

    //将stringstream中的字符串输出到cout以进行验证
    cout << oss.str() << endl;

    return 0;
}
