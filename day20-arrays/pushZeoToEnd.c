#include <stdio.h>
void pushZer0ToEnd(int *arr, int n){
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
           temp[j++]=arr[i];
        
    }
    while(j<n)
        temp[j++]=0;

        for(int i=0;i<n;i++){
            arr[i]=temp[i];
        }
}
int main()
{
int arr[6]={1,2,0,0,4,5};
int n=sizeof(arr)/sizeof(arr[0]);

pushZer0ToEnd(arr,n);
for (int i = 0; i < n; i++)
{
    printf("%d",arr[i]);
}

return 0;
} 