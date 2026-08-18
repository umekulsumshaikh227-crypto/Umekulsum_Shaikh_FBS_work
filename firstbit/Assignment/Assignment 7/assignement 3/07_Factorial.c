#include <stdio.h>

void findFactorial(int *n)
{
    int i;
    long long factorial = 1;

    for (i = 1; i <= *n; i++)
        factorial = factorial * i;

    printf("Factorial = %lld", factorial);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    findFactorial(&n);

    return 0;
}
