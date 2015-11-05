#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int Arr[] = {-1,0,0,2,5,2,6,0,8,12};
	vector<int> xx;
	int len=sizeof(Arr);
    cout << "The length of Arr is" << len << endl;
	for(int i=0;i<len;i++)
		if(Arr[i]!=0)
			xx.push_back(Arr[i]);
		
	int last_len = len - xx.size();

    cout << "origin Array list is:";
	for(int j=0;j<len;j++)
		cout <<" " << Arr[j] << " ";
	cout << endl;

	for(vector<int>::iterator it=xx.begin();it<xx.end();it++)
		cout<< *it << endl;
	while(last_len--)
		cout << 0 << endl;
}

