#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char first_name[100];
char Surname[100];
char ch[2];
//Asking for writing your first name
printf("Enter your first name \n ");
scanf("%s",first_name);
//Rewriting your name
printf("Hey! %s \n",first_name);

//Ask if they want to add surname
printf("Would you like to tell me your surname?? This is optional if you have to so simply type 'Y' for yes and 'N' for No\n");
scanf("%s",ch);

//Validate if they want to store or not
if(strcmp(ch , 'Y')){
    printf("What is Your Surname??\n");
    scanf("%s",Surname);
    printf("Your Whole Name Is %s %s",first_name,Surname);
}
return 0;
}