#include <stdio.h>

void printStrong(int *n)
{
    int num, temp, digit, i, factorial, sum;

    for (num = 1; num <= *n; num++)
    {
        temp = num;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            factorial = 1;

            for (i = 1; i <= digit; i++)
                factorial = factorial * i;

            sum = sum + factorial;
            temp = temp / 10;
        }

        if (sum == num)
            printf("%d ", num);
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printStrong(&n);

    return 0;
}
