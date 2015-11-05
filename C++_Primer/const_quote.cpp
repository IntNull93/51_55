#include <iostream>

using namespace std;

int main()
{
	int i = 41;
	const int &r =42;
	const int &r2 = r + i;

	int ival = 1.01;
	const int & ival3 = ival;	
//	const int & ival3 = 1;
//	ival3 = ival;
//	const_quote.c:14:8: error: assignment of read-only reference ‘ival3’
		
	cout << r2 <<endl;
	cout << ival3 << endl;
}
