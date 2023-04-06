#include<stdio.h>
int main()
{
	int x=10;
	float y=2.0;
	float *px;
	px=&y;//Invalid, as px is of integer type and y is of float type
	int *ptr;
	ptr=&x;//valid as both ptr and x are of same types
	printf("value of y =%f",*px);
	printf("\n value of x=%d",*ptr);
}

