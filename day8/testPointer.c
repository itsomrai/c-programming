#include <stdio.h>
int main()
{
char i='A';
char* j= &i;
float k=2.5;
float* k1=&k;
printf("the value address of i is %c \n",*(&i));
printf("the value address of i is %c \n",*j);
printf("the value address of k is %f \n",*(&k));
printf("the value address of k is %f \n",k1);
printf("the value address of j is %c \n",*(&i));
return 0;
}