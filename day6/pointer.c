#include <stdio.h>
int main()
{
int i=75;
int* j= &i;
printf("the address of i is %p",&i);
printf("the address of j is %p",j);
return 0;
}