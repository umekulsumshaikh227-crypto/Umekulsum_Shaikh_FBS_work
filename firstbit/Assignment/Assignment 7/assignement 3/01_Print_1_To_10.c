#include <stdio.h>

void printNumbers(int *end)
{
    int i;

    for (i = 1; i <= *end; i++)
        printf("%d ", i);
}

int main()
{
    int end = 10;

    printNumbers(&end);

    return 0;
}
