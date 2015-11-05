#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void FindPerfect(int num )
{
        int i = 1;
        int result = 0;
        int num2 = 6;
        while(num2 <= num)
        {
                i=1;
                result = 0;
                while(i < num2 )
                {
                        if((num2)%i==0)
                        {
                                result += i;
                        }
                        i++;
                        //        cout << "result: " << result << endl;
                       //         cout << "i: " << i << endl;
                }
                if(result == num2)
                        cout << "perfect: " <<  num2 << endl;
//                else
//                        cout << "not perfect: " << num2 << endl;
                num2++;
        }
}

int main()
{
//        vector<int> ivec;
        FindPerfect(2000);
        return 0;
}
