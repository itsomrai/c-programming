#include <stdio.h>
int main()
{
int rev=0,n,temp;
printf("Enter the no.");
scanf("%d",&n);
temp=n;
while(temp!=0){
    rev=rev*10;
    rev= rev+temp%10;
    temp=temp/10;
}
if(n==rev)
    printf(" %d is palindrome",n);

else
    printf(" %d is  not palindrome",n);

return 0;
}
