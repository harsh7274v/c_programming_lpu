#include<stdio.h>
int main()
{
	int a=-1,b=4,c=1,d;
	d = ++a && ++b||++c;
	printf("%d,%d,%d,%d\n",a,b,c,d);
	printf("%d",b);
	return 0;
}
//*math library,user defined functions,functions call*//
