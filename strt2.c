#include<stdio.h>
struct student{
	char *name;
	int regno;
	int age;
	char dobm;
};// end structure car
int main(){
	struct student hii; //define structure variable
	hii.name="harsh";
	hii.regno= 12219201;
	hii.age=20;
	hii.dobm="april";
	printf("student_name=%s student_regno=%f student_ag0e=%d student_dobm=%s\n",
	hii.name,hii.regno,hii.age,hii.dobm);
}
