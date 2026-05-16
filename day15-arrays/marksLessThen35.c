#include <stdio.h>
int main()
{
int marks[10]={95,25,31,31,50,40,78,90,60,89};
for(int i=0;i<10;i++){
    if(marks[i]<35){//statement for printing less then 35 marks students marks
        printf("Marks is %d and roll no. is %d\n",marks[i],i);
    
    }
}
return 0;
}