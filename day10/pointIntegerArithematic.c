#include <stdio.h>
int main()
{
    //POINTER ARITHEMATIC USING INTEGER POINTER
    int a=5;
    int* ptr=&a;
    printf("the address of a is %u\n ",&a);
    printf("the address of a is %u\n ",ptr);
    ptr++;
    printf("the address of ptr is %u\n ",ptr);//THE DIFFERENCE WILL COME OF 4 BYTES

return 0;
}