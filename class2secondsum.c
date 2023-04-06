#include<stdio.h>
main()
{
	float x1,x2,x3; //identifiers x1,x2,x3//
	printf("Enter values of x1 and x2: ");
	scanf("%f %f",&x1,&x2);
	x3=x1/x2;
	printf("The division is = %f", x3 ); 
	printf("\n  Address of x1,x2,x3 is: %p,%p,%p",&x1,x2,x3); // \n to print the line in the new line; %p is the address//
	}
	
