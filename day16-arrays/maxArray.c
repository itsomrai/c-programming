#include <stdio.h>
#include<limits.h>
int main()
{
int arr[5]={13,43,55,67,32};
int max=INT_MIN;
int smax=INT_MIN;
for (int i = 0; i < 5 ; i++)
{
    if(max<arr[i]){
        max=arr[i];
    }

  
        
}  
  printf("The max value is %d\n",max);

return 0;
}
