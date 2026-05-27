#include <stdio.h>
int main()
{
 char s1[]="Physics Wallah";
 char s2[]="physics Wallah";
 s2[0]='M';
 printf("s1=%s\n",s1);
 printf("adress of s1=%p\n",s1);
 printf("s2= %s\n",s2);
 printf("adress of s2= %p\n",s2);
return 0;
}