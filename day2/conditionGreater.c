#include<stdio.h>
int main(){
int a,b,c,d;
printf( "Enter four number:");
scanf("%d %d %d %d", &a,&b,&c,&d);
if(a>b && a>c && a>d){
    printf("A IS THE GREATEST NUMBE %d" , a);

}
else if(b>a && b>c && b>d){
    printf("B IS THE GREATEST NUMBER %d",b);

}
else if(c>a && c>b && c>d){
    printf("C IS THE GREATEST NUMBER %d" , c);

}
else if(d>a && d>b && d>c){
    printf("D IS THE GREATEST NUMBER %d" , d);

}
return 0;
}