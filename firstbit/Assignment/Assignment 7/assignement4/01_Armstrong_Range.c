#include <stdio.h>

void printArmstrong(int *n)
{
    int num, temp, digit, sum;

    for (num = 1; num <= *n; num++)
    {
        temp = num;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + digit * digit * digit;
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

    printArmstrong(&n);

    return 0;
}
