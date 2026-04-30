#include <stdio.h>
int sum(int *,int *);
//SUM SHOULD CHANGE THE VALUE OF X
int sum(int* a,int* b){
    *a=6;
    return (*a + *b);
}
int main()
{
int x=1, y=6;
printf("the sum of a and b is %d\n", sum(&x , &y));//CALLING THE VALUE OF A
printf("the value of x is %d \n",x);
return 0;
}