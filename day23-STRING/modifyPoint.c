#include <stdio.h>
int main()
{
char* ptr="College Wallah";
ptr="Physics Wallah";//whole string can be modify in pointers
//ptr[0]='D' The individual character cant be modify
printf("%s",ptr);
return 0;
}