#include<stdio.h>
int main()
 {
 	int a[100];
 	int hold, i, j, n;
 	printf("\n Enter value of n: ");
 	scanf("%d",&n);
 	printf("\n Enter elements: ");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("\n Data items in original order : " );
	 for (i=0;i<n;i++)
	 {
	 	printf("%d ",a[i]);
	 }
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=0;j<n-i-1;j++)
	 	{
	 	if (a[j]>a[j+1])
	 	{
	 		hold = a[j];
	 		a[j] = a[j+1];
	 		a[j+1] = hold;
		 }
	 }
}
	printf("\n Data items in ascending order : " );
 for (i=0;i<n;i++)
 {
 	printf("%d ", a[i] );
 }
}
 //sorting = arrangement of given array in an asscending or decending order
 //bubble sort is an application method algorithm == it is suitable for small numbers only
