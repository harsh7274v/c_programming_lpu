#include<stdio.h>
int sum();
int avg();
void main(){
	int r,average;
	printf("Sum of two nos:= ");
	r=sum();
	printf("%d",r);
	printf("Sum of two no = %d \n",r);
	average = avg();
	printf("Average of two nos= %d",average);	
}

int sum(){
	int a,b;
		scanf("%d %d",&a,&b);
		return(a+b);
}
int avg(){
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	return ((x+y+z)/3);
}
