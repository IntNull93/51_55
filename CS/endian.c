#include <stdio.h>
#include <stdbool.h>

bool IsBig_Endian() {     
  unsigned short test = 0x1234;     
  if(*( (unsigned char*) &test ) == 0x12)        
    return true;    
  else        
    return false;
}

int checkCPU( )
{
    {
        union w
        { 
            int a;
            char b;
        }c;
        c.a = 1;
        return(c.b == 1);
    }
}

int main(int argc,char * argv[])
{
	bool flag = IsBig_Endian();
	printf("%d\n",flag);
	int Flag = checkCPU();
	printf("%d\n",Flag);
	return 0;
}
