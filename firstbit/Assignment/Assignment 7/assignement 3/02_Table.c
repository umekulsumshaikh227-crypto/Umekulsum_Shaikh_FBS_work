#include <stdio.h>

void printTable(int *n)
{
    int i;

    for (i = 1; i <= 10; i++)
        printf("%d ", *n * i);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printTable(&n);

    return 0;
}
