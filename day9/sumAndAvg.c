#include <stdio.h>
int* sum(int , int);
int* sum(int a, int b){
    int s=a+b;
    int* ptr=&s;
    printf("The sum is %d\n",s);
    return ptr;

}
float* average(int, int);
float* average(int a, int b){
    float avg=(a+b)/2.0;
    float* ptr= &avg;
    printf("the avg is %.1f\n",avg);
    return ptr;
}

int main()
{ 
int x=5;
int y=10;
int* ptr1;
float* ptr2;
ptr1=sum(x,y);
ptr2=average(x,y);
printf("the address os sum is %u and of avg is %u",ptr1,ptr2);
return 0;
}