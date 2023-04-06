#include<stdio.h>
main()
{
	int x1,x2,x3; //identifiers x1,x2,x3//
	printf("Enter values of x1 and x2: ");
	scanf("%d %d",&x1,&x2);
	x3=x1 - x2;
	printf("The substraction is = %d", x3);
	getch();
}
