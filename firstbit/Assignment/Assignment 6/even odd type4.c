#include <stdio.h>

int evenodd(int n)
{
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n, result;

    printf("Enter number: ");
    scanf("%d", &n);

    result = evenodd(n);

    if(result == 1)
        printf("Even");
    else
        printf("Odd");

    return 0;
}