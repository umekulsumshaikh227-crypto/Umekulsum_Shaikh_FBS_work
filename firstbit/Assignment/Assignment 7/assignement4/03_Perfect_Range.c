#include <stdio.h>

void printPerfect(int *n)
{
    int num, i, sum;

    for (num = 1; num <= *n; num++)
    {
        sum = 0;

        for (i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
                sum = sum + i;
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

    printPerfect(&n);

    return 0;
}
