#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec;
	int ival;
		
	cout << "Enter numbers(Ctrl+Z to end): " << endl;
	while(cin >> ival)
		ivec.push_back(ival);
	
	if(ivec.size() == 0){
		cout << "No element " << endl;
		return -1;
	}
	cout << "Sum of each pair of adjacent elements in the vector: " << endl;
	vector<int>::size_type cnt =0;
	vector<int>::size_type first,last;
	for(first =0,last = ivec.size()-1; first < last; ++first,--last){
		cout << ivec[last] + ivec[first] << "\t";
		++cnt;
		if(cnt %6 ==0)
			cout << endl;
	}
	
	if(first == last )
		cout << "\nThe last element is not been summed and its value is " << ivec[first] << endl;
}
