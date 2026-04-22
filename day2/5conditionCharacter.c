#include<stdio.h>
int main(){
char ch='Z';
printf("THE CHARACTER IS %c\n",ch);
printf("WHOSE VALUE IS %d\n",ch);
if(ch>=97 && ch<=122){
    printf(" THE CHARACTER IS LOWER CASE");
}
else{
    printf("THE CHARACTER IS NOT LOWER CASE");
}
return 0;
}