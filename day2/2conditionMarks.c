#include<stdio.h>
int main(){
int SpercenT,MpercenT,EpercenT;
printf("enter the math percent: ");
scanf("%d",&MpercenT);
printf("enter the english percent: ");
scanf("%d",&EpercenT);
printf("enter the Science percent: ");
scanf("%d",&SpercenT);
printf("THE MARKS ARE MATHS: %d SCIENCE: %d and ENGLISH : %d\n",MpercenT,SpercenT,EpercenT);
if(MpercenT<=33 || SpercenT<=33|| EpercenT<=33){
    printf("YOU ARE FAILED DUE TO LESS MARKS IN INDIVIDUAL SUBJECT(s)\n");
}
else if((MpercenT + SpercenT + EpercenT)/3 <40 ){
     printf("YOU ARE FAILED DUE TO LESS PERCENTAGE");

}
else{
    printf("YOU ARE PASSED");
}
return 0;
}