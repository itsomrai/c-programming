#include <stdio.h>
#include <float.h>
int main()
{
    char op;
    double a, b, res;
    printf("Enter the opretor(+,-,*,/)");
    scanf("%c", &op);
    printf("Enter the oprendes:");
    scanf("%lf %lf", &a, &b);
    switch (op)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;

    default:
        printf("ERROR (the opretor is incorrect)");
        res = -DBL_MAX;
    }
    if (res != -DBL_MAX)
    {
        printf("%.2lf", res);
        return 0;
    }
}
