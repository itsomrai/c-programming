#include<stdio.h>
int main(){
int i,fact =1;
printf("enter the number to find factorial");
scanf("%d",&i);
while(i>0){
    fact=fact*i;
    i--;

}
printf("factorial = %d \n",fact);

return 0;
    
}