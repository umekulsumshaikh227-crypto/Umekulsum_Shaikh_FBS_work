#include <stdio.h>

void sumFirstLastDigit(int *n)
{
    int temp = *n;
    int firstDigit;
    int lastDigit;

    lastDigit = *n % 10;

    while (temp >= 10)
        temp = temp / 10;

    firstDigit = temp;

    printf("First Digit = %d\n", firstDigit);
    printf("Last Digit = %d\n", lastDigit);
    printf("Sum = %d", firstDigit + lastDigit);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    sumFirstLastDigit(&n);

    return 0;
}
