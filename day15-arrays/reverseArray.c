#include <stdio.h>
int main()
{
int arr[5];
for(int i=0;i<=4;i++){
    printf("Enter Elements no. %d\n",i);
    scanf("%d",&arr[i]);
}
for(int i=4;i>=0;i--){//Reversing the array
    printf("%d",arr[i]);
}
return 0;
}