#include <stdio.h>

void checkEvenOdd(int *num)
{
    if (*num % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkEvenOdd(&num);

    return 0;
}
