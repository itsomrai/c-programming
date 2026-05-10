#include <stdio.h>
int count(int arr[] , int n)
{
    int noOfPositiveInteger =0;
    for(int i=0 ; i< n ; i++)
    {
        if (arr[i]>0){
            noOfPositiveInteger++;
        }
    }
    return noOfPositiveInteger;
}
int main()
{
int arr[]={-1,2,-3,4,5,6,7,-8,9,10};
printf("The No Of Positive integers are %d \n" , count(arr , 10));
return 0;
}