#include<stdio.h>
int main(){
int a,b,c;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
printf("enter the value of c");
scanf("%d",&c);
if(a>=b){
    if(a>=c)
    printf("a is the greater number :%d",a);

else
    printf("c is the greater number :%d",c);
}
else {
if (b >= c)
            printf("b is the largest number:%d", b);
        else
            printf("c is the largest number: %d", c);
    }

return 0;
}