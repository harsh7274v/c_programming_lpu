/*write a programe to enter the details like reg_number,cgpa,grade,mobile nukmber and semistor*/
#include<stdio.h>
main()
{
 long int rn;
 char mob[11];
 int sem;
char grade;
float cgpa;
printf(" Registration number: ");
scanf("%ld",&rn);
printf("\n Student mobile number: ");
scanf("%s",&mob);
printf("\n Student in which Semistor: ");
scanf("%d",&sem);
printf("\n Student grade: ");
scanf(" %c",&grade);
printf("\n Student CGPA: ");
scanf("%f",&cgpa);
printf("\n Registration number: %ld",rn);
printf("\n Student mobile number: %s",mob);
printf("\n Student in which semistor: %d",sem);
printf("\n Student grade: %c",grade);
printf("\n Student CGPA: %.2f",cgpa);
getch();
}
