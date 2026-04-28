//factorial (5)=1x2x3x4x5
//factorial (4)=1x2x3x4
//factorial(n)=1x2x3x4x5x...n-1 x n
//factorial(n-1)=1x2x3x4xx5...xn-1
#include <stdio.h>

int factorial(int n);

int factorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return factorial(n - 1) * n;
}

int main() {
    int a = 4;
    printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}