#include <stdio.h>

void findGreatest(int *a, int *b, int *c)
{
    int greatest;

    if (*a > *b)
    {
        if (*a > *c)
            greatest = *a;
        else
            greatest = *c;
    }
    else
    {
        if (*b > *c)
            greatest = *b;
        else
            greatest = *c;
    }

    printf("Greatest = %d", greatest);
}

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    findGreatest(&a, &b, &c);

    return 0;
}
