#include <stdio.h>
int main()
{
int marks[]={12,33,44,22,};
//int* ptr=&marks[0];
int* ptr=marks;//SAME AS int* ptr=&marks[0];
for(int i=0;i<4;i++){
printf("the marks at index %d is %d\n",i,marks[i]);//NORMALLY BY TAKING VALUE
printf("the marks at index %d is %d\n",i,*ptr);//HELP OF MEMORY ; BOTH ARE SAME
ptr++;
}
return 0;
}    