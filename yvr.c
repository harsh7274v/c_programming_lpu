/*Automatic class auto int a; or int a;*/
#include<stdio.h>
void fun(){
	auto int a=20;
	++a;
	printf("%d\n",a);
}
void main(){
	fun();
	fun();
	fun();
}
