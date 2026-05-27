#include <stdio.h>
#include<string.h>
int main()
{
char s1[7]="OM RAI";
char s2[7];
strcpy(s2,s1);
s2[0]='D';//DEEP COPY ONLY CHANGE THE CHARACTER WHERE YOU HAVE GIVEN THE INSTRUCTIONS
printf("%s\n",s2);//S1 CHARACTER MODIFIED
printf("%s",s1);//DIDNT CHANGED THE S1 CHARACTER
return 0;
}