#include <stdio.h>
#include<string.h>
int main()
{
char str[]="OM RAI";
char* ptr=str;           /*checking the address of 1st element And whole character*/                     
printf("%p\n",&str[0]);  //for first element
printf("%p\n",str);      //for 2nd element
int i=0;
while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
    i++;
}
return 0;
}