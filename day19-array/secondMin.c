#include <stdio.h>
#include<limits.h>
int main()
{
int arr[5]={10,20,30,40,50};
int min=INT_MAX;
int smin=INT_MAX;
for(int i=0;i<5;i++){
    if(min>arr[i]){
        min=arr[i];
    }
}
for(int i=0;i<5;i++){
    if(arr[i]!=min && smin>arr[i]){
        smin=arr[i];
    }
}
  printf("The second min value is %d\n",smin);
return 0;
}