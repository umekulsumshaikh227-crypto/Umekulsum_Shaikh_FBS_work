#include <stdio.h>

int evenodd()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int result;

    result = evenodd();

    if(result == 1)
        printf("Even");
    else
        printf("Odd");

    return 0;
}