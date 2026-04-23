#include<stdio.h>
#include<math.h>
int main()
{
    double princ,rate,time, amt,ci;
    printf("enter the priciple:");
    scanf("%lf", &princ);
    printf("enter the rate");
    scanf("%lf", &rate);

   printf("enter the time:");
    scanf("%lf", &time);
amt= princ*pow((1+rate/100),time);
ci=amt-princ;
printf("the compound interest is %lf", ci);
return 0;
    
} 

    