/*progame to print simple intrest*/
#include<stdio.h>
main()
{
	float P,T,R,U;
	printf("Enter principle amount: ");
	scanf("%f ",&P);
	printf("\n Enter the time: ");
	scanf("%f",&T);
	printf(" \n Enter the rate of intrest: ");
	scanf("%f",&R);
	U=(P*T*R)/100;
	printf("Simple Intrest= %f",U);
	printf("\n Address of P,T,R,U: %p,%p,%p,%p",&P,&T,&R,&U);
	getch();
}
