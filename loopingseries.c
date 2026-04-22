#include<stdio.h>
int main(){
int n;int s=0;
printf("enter the no.");
scanf("%d",&n);
for(int i=0; i<n; i++)
{
  s=s+i;
    printf("%d\n",s); 
    
}
return 0;
}