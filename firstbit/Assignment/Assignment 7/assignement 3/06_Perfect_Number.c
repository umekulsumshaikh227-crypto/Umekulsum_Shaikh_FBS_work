#include <stdio.h>

void checkPerfect(int *n)
{
    int i;
    int sum = 0;

    for (i = 1; i <= *n / 2; i++)
    {
        if (*n % i == 0)
            sum = sum + i;
    }

    if (sum == *n && *n > 0)
        printf("Perfect");
    else
        printf("Not Perfect");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkPerfect(&n);

    return 0;
}
