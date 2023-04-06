#include<stdio.h>
int sum();
void main(){
	int r;
	printf("Sum of two nos:= ");
	r=sum();
	printf("%d",r);
}

int sum(){
	int a,b;
		scanf("%d %d",&a,&b);
		return(a+b);
	}
