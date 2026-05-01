#include <stdio.h>
int main()
{
int i=75;
int* j=&i;
int** k=&j;
printf("the addres of i is %d\n ",&i);
printf("the value of i is %d\n ",*(&i));
printf("the value of i is %d\n ",**(&j));

return 0;
}