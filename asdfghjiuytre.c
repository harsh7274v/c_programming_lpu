#include<stdio.h>
void sum(float,int);
void main(){
    int b,result;
    float a;
    printf("print two numbers:");
    scanf("%f %d",&a,&b);
    sum(a,b);
}

void sum(float a,int b){
    printf("sum is %f",a+b);
}

