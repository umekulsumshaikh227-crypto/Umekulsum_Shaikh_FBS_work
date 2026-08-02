#include<stdio.h>

void main()
{
    int n, first, last;

    printf("Enter Number: ");
    scanf("%d",&n);

    last=n%10;

    while(n>=10)
    {
        n=n/10;
    }

    first=n;

    printf("Sum = %d", first+last);
}