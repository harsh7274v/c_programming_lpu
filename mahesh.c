#include<stdio.h>
main()
{
	int x1,x2,x3,x4; //identifiers x1,x2,x3//
	printf("Enter values of x1,x2,x3: ");
	scanf("%d %d %d",&x1,&x2,&x3);
	x4=x1+x2+x3;
	printf("The sum is = %d", x4);
	getch();
}
