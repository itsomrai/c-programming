#include <stdio.h>
int main()
{
char arr[]="College Wallah is The Best Channel\0";//\0 takes 0 byte
int i=0;
while(arr[i] != '\0'){//initialisation without counting the index no. to apply for the end to loop work
printf("%c",arr[i]);
i++;
}
return 0;
}