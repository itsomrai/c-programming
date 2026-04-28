#include <stdio.h>
float force(float);
float force(float m){
    return m*9.8;
}
int main()
{
float m=4.5;
printf("the force attraction exerted is %.2f",force(m));
return 0;
}