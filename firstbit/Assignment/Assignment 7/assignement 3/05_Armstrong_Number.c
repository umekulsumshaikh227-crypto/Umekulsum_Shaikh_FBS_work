#include <stdio.h>

void checkArmstrong(int *n)
{
    int original = *n;
    int temp = *n;
    int digit;
    int sum = 0;

    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkArmstrong(&n);

    return 0;
}
