#include <stdio.h>

void checkStrong(int *n)
{
    int original = *n;
    int temp = *n;
    int digit;
    int i;
    int factorial;
    int sum = 0;

    while (temp > 0)
    {
        digit = temp % 10;
        factorial = 1;

        for (i = 1; i <= digit; i++)
            factorial = factorial * i;

        sum = sum + factorial;
        temp = temp / 10;
    }

    if (sum == original)
        printf("Strong");
    else
        printf("Not Strong");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkStrong(&n);

    return 0;
}
