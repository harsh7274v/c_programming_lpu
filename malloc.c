#include<stdio.h>
#include<stdlib.h>//required for dynamic memory
int main(){
	int number,*ptr,i;
	printf("how many ints would you like store?");
	scanf("%d",&number);
	ptr=(int*)malloc(number*sizeof(int));//allocate memory
	for(i=0;i<number;i++){
		*(ptr+i)=i;
	}
	for(i=0;i<number;i++){
		printf("%d\n",*(ptr+i));
	}
	return 0;
}
