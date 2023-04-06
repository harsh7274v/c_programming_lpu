#include<stdio.h>
int main()
{
	int a[50];
	int i, loc = -1,key,n;	//location=-1 because it starts from 0 
	printf("\n Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a value to search in array:");
	scanf("%d",&key );
	//attempt to locate search key in arrary a
	for ( i = 0; i < n; i++ )
	{
		if( a[i] == key)
		{
		loc = i;//location of key is stored
		break;
		}
	}
	if(loc!= -1)
	{
	printf("Element found at %d",loc+1);
	printf("The index of the key: %d",loc);
	}
	else 
	{
		printf("Element not found");
	}
	return 0;
}
