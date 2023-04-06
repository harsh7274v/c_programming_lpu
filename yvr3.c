/*pointer cointains place of given variable*/
/*register is a limited memory =1byte*/
#include<stdio.h>
void main(){
	register int x,sum=0;
	for(x=1;x<10000;x++){
		sum+=x;
	}
	printf("Sum=%d",sum);
}
