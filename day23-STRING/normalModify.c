#include <stdio.h>
#include<string.h>
int main()
{
char str[]="College Wallah";
//str[0]='d'; NORMALLY
char* p= str;
*p='D';   //WITH THE HELP OF POINTERS
printf("%s",str);
return 0;
}