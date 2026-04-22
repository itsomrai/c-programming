#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
srand(time(0));
int randomNumber=(rand()%100)+1;
int no_of_guesses=0;
int guessed_No;
do{
    printf("Guess the number\n");
    scanf("%d",&guessed_No);
    if(guessed_No>randomNumber){
        printf("lower number please\n");

    }
    else if(guessed_No<randomNumber){
        printf("higher number please\n");

    }
    else{
        printf("Congrats you guessed the number correctly\n");
    }
    no_of_guesses++;
}
while(guessed_No!=randomNumber);
printf("you guessed the number in %d guesses \n",no_of_guesses);
return 0;
}