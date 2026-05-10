#include <stdio.h>
int main()
{
char st[]={'a','b','c','\0'};
//char st[]="abc"; SAME AS char st[]={'a','b','c','\0'};
/*for (int i = 0; i < 3; i++)
{
    printf("the character is %c \n", st[i]);
}*/
printf("%s",st);
return 0;
}