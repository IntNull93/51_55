#include <iostream>

using namespace std;

int main()
{
	int i,k,sum=0;
	for(i=1;i<=2000;i++)
	{
		sum = 0;
		for(k=1;k<i;k++)
			if(i%k==0) 
				sum=sum+k;
		if(sum==i) 
			cout<<sum<<endl;
	}
	return 0;
}
