#include<stdio.h>
void value(int);	//we are using value function
void main(){
	int arr[100],n;
	int i;
	printf("\n Enter n:");
	scanf("%d",&n);
	printf("\n Enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n Elements by value: ");
	for(i=0;i<n;i++){
		value(arr[i]);
	}
}
void value(int u){
		printf(" %d",u);
	}
