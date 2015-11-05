#include <iostream>

using namespace std;

int main()
{
	cout << "Input the two strings "<<endl;
	string s1,s2;
	
	cin >> s1 >> s2;
	
	if( s1 == s2 )
		cout << "They are equal "<<endl;
	else	if( s1 > s2 )
		cout << "\"" << s1 << "\"" <<" is bigger than " << "\"" << s2 << "\"" <<endl;
	else
		cout << "\"" << s2 << "\"" <<" is bigger than " << "\"" << s1 << "\"" <<endl;
}
