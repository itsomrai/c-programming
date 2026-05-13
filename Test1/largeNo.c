#include <stdio.h>
int main()
{
int n, i;
float arr[100];
printf("Enter the total no. of numbers you have to input");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Enter number %d:",i+1);
    scanf("%f",&arr[i]);

}
float l =arr[0];
for(i=1;i<n;i++){
    if(arr[i]>l){
l=arr[i];
    }
}
printf("the largest number is %f\n",l);
return 0;
}