#include <stdio.h>
int main()
{
    int marks = 60;
    char GRADE;
    if (marks >= 90)
    {
        GRADE = 'A';
    }
    else if (marks >= 70)
    {
        GRADE = 'B';
    }
    else if (marks >= 60)
    {
        GRADE = 'C';
    }
    else if (marks >= 50)
    {
        GRADE = 'D';
    }
    else
    {
        GRADE = 'F';
    }
    printf("grade: %c", GRADE);
    return 0;
}