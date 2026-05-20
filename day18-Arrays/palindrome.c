#include <stdio.h>
int main()
{
int rev=0;int temp;int n;
printf("enter the number to check its palindrome or not");
scanf("%d",&n);
temp=n;
while(temp!=0){
    rev*=10;
    rev+=temp%10;
    temp=temp/10;
}
if(n==rev){
printf("%d is a palindrome no",n);
}
else{
    printf("%d is not a palindrome no.",n);
}
return 0;
}