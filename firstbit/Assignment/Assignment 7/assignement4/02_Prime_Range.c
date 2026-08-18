#include <stdio.h>

void printPrimes(int *n)
{
    int num, i, isPrime;

    for (num = 2; num <= *n; num++)
    {
        isPrime = 1;

        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", num);
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printPrimes(&n);

    return 0;
}
