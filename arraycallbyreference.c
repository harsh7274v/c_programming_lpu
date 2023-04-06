#include<stdio.h>
void reference(int[],int);	//we are using reference function here
int main()
{
	int arr[100],n;
	int i;
	printf("\n Enter no of array:");
	scanf("%d",&n);
	printf("\n Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Elements by reference:");
	reference(arr,n);//Passing array by call by reference
	return 0;
}

void reference(int x[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",x[i]);
	}
}
