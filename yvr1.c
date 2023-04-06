#include<stdio.h>
void fun(){
	static int a=20;
	++a;
	printf("%d\n",a);
}
void main(){
	fun();
	fun();
	fun();
}
