/* prog. to store 3 x 3 matrix values and print
  transpose  of a matrix and verify whether it is symmetric or not */
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],i,j,b[3][3],temp=0;
  clrscr();
  /* input part */
  printf("\nEnter  3 x 3 matrix values  ");
  for(i=0;i<3;i++)
   for(j=0;j<3;j++)
   {
     scanf("%d",&a[i][j]);
     b[j][i]=a[i][j];
   }

 /* output part */
  printf("\nGiven Matrix  \n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
      printf("%d  ",a[i][j]);
   printf("\n");
  }

  printf("\n Transpose Matrix  \n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
      printf("%d  ",b[i][j]);
   printf("\n");
  }
  /* verification process */
  for(i=0;i<3;i++)
   for(j=0;j<3;j++)
     if(a[i][j]!=b[i][j])
       temp++;

  if(temp==0)
    printf("\n Symmetric");
  else
   printf("\n Not Symmetric");
}

