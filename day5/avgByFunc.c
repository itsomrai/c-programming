#include <stdio.h>
float  average(int a,int b,int c);

float average(int a,int b,int c){
    return (a+b+c)/3.0;
}
int main()
{
int a=20,b=30,c=11;
printf("the avg of a= %d ,b=%d,c=%d is %f",a,b,c,average(a,b,c));
return 0;
}