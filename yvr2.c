#include<stdio.h>
void fun1();
void fun2();
void main(){
	extern int x;
	printf("x = %d\n",x);
	fun1();
	fun2();
}
fun1(){
	int x=1;
	x+=5;
	printf("x = %d\n",x);
}
int x=20;	

fun2()
{
	int x = 1;
	x+=5;
	printf("x = %d\n",x);
}
