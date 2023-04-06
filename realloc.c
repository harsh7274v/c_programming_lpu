#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int *ptr,i;
	ptr=(int*)calloc(5,sizeof(int));
	*ptr=1;
	*(ptr+1)=2;
	ptr[2]=4;
	ptr[3]=8;
	ptr[4]=16;
	ptr=(int*)realloc(ptr,7*sizeof(int));
	printf("now allocating more memory");
	ptr[5]=32; /*now it is legal*/
	ptr[6]=64;
	for(i=0;i<7;i++){
		printf("ptr[%d] holds %d\n",i,ptr[i]);
	}
	return 0;
}
