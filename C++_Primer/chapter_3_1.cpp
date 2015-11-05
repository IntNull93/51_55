#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int base,exponent;
	long result = 1;
	
	cout << "enter the base and the exponent: " << endl;
	cin >> base >> exponent;

	if( exponent < 0 ){
		cout << "Exponent can't be smaller than 0" << endl;
		result = -1;
	}
	if( exponent >0){
		for(int cnt =1;cnt <= exponent ; ++cnt)
			result *= base;
	}
	
	cout << base
	     << " raised to the power of "
	     << exponent << ": "
	     << result << endl;
	return 0;
}
