#include<stdio.h>
int main(){
    int a,b,sum;
    //%d is a format specifier
    //%d is for int,%f for float,//%c for char,%lf for double 
    printf("enter the integer:");
    scanf("%d %d",&a , &b);
    sum=a+b;
    printf("the sum is:%d", sum);
    return 0;
}