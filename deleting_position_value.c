#include<stdio.h>
int main(){
	int array[100], position, value, c, n;
	printf("Define the size of an array\n");
	scanf("%d",&n);
	printf("Enter elements in your array\n");
	for(c=0; c<n; c++){
	scanf("%d",&array[c]);
	}
	printf("Enter the location where you want to delete from the array\n");
	scanf("%d",&position);
	for(c=position-1; c<n-1; c++){
		array[c]=array[c+1];	//to bring the next element from the array to the deleted location
	}
	printf("Resultant array\n");
	for(c=0; c<=n-1; c++){
		printf("%d\n",array[c]);
	}
	return 0;
}
