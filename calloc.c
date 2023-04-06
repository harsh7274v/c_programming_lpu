/*calloc function 
contigous allocation.it provide access to memory which is avaliable for memory
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
// no of argument it can hold is 2
void main(){
	float *x;
	int i,n;
	printf("how many elements do u want");
	scanf("%d",&n);
	x=(float*)calloc(n,sizeof(float));
	if(x!=NULL)
	{
		printf("data is=\n");
		for(i=0;i<n;i++)
		printf("\n x[%d]=%d",i,*(x+i));
	}
	else
	printf("calloc falied");
	getch();
}
