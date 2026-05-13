#include <stdio.h>
#include <float.h>
int main()
{
double res;
double a,b;
char op;
printf("Enter the Oprends");
scanf("%c",op);
printf("Enter A and B");
scanf("%lf %lf", &a ,&b);
switch (op)
{
case '+':
    res=a+b;
    break;
case '-':
   res= a-b;
    break;
case '*':
   res= a*b;
    break;
case '/':
   res= a/b;
   break;
    default:
printf("Error(This operator is incoreect)");
res= -DBL_MAX;
}
if(res!= -DBL_MAX){
    printf("%.2lf",res);
    

return 0;
}
}