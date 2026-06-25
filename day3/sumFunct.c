#include<stdio.h>
int sum(int,int);

int sum(int x,int y){
    return x+y;
}
int main(){
int a=2;
int b=10;
int c=sum(a,b);
printf("the sum is %d\n",c);

int a1=10;
int b1=11;
int c1= sum(a1,b1);
printf("the sum is %d\n",c1);

int a2=12;
int b2 =11;
int c2= sum(a2,b2);
printf("the sum is %d\n",c2);

return 0;
}