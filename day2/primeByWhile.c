#include<stdio.h>
int main(){
int i=2;
int not_prime=0;
int n=11;
while(i<n){
if(n%i==0 && n!=2){
    not_prime=1;
    break;
}
i++;
}
if(not_prime){
    printf("%d is not prime",n);
}
else{
    printf("%d is the prime number",n);
}
return 0;
}