#include <stdio.h>
int main()
{
    //POINTER ARITHEMATIC USING CHARACTER POINTER
char a='A';
char* ptr=&a;
printf("The address of a is %u\n",&a);
printf("The address of a is %u\n",ptr);
ptr++;
printf("The value of ptr is %u\n",ptr);//DIFFERENCE WILL COME OF 1 BYTE
return 0;
}