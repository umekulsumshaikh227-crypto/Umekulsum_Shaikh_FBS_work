#include <stdio.h>

void checkPrime(int *n)
{
    int i;
    int isPrime = 1;

    if (*n <= 1)
        isPrime = 0;
    else
    {
        for (i = 2; i <= *n / 2; i++)
        {
            if (*n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime");
    else
        printf("Not Prime");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkPrime(&n);

    return 0;
}
