#include <stdio.h>
#include<limits.h>
int main()
{
int arr[5]={93,43,55,67,32};
int min=INT_MAX;

for (int i = 0; i < 5 ; i++)
{
    if(min>arr[i]){
        min=arr[i];
    }
    
}
printf("The min value is %d\n",min);
return 0;
}