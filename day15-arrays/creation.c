#include <stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
arr[4]=100;//{1,2,3,4,100} new array formed
float a[5]={1.2,1.3,1.4,1.5,1.6};
char r[5]={'a','b','c','d','e'};
printf("%d\n",arr[2]);//printimg the value of array
printf("%.2f\n",a[3]);//printimg the value of array
printf("%c\n",r[4]);//printimg the value of array
return 0;
}