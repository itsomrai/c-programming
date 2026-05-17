#include <stdio.h>
int main()
{
int arr[5]={93,43,55,67,32};
int min=arr[0];
for (int i = 0; i < 5 ; i++)
{
    if(min>arr[i]){
        min=arr[i];
    }
    
}
printf("The min value is %d\n",min);
return 0;
}