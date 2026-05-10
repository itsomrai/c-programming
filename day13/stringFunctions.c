#include <stdio.h>
#include <string.h>
int main()
{
char st[]="OM";
printf("%d\n", strlen(st));//strlen is the function which tells the length

char source[]="harry";
char target[30];
strcpy(target,st);// [STRCPY HELP IN COPYING THE SOURCE]
printf("%s %s\n", st, target);//TARGET NOW CONTAINS "HARRY"

char s1[12] = "hello";
char s2[12]=" OM";
strcat(s1,s2);//CONCATINATION GOING ON
printf("%s\n",s1);//S1 NOW CONTAINS "HELLOOM" <no space in between>


return 0;

}