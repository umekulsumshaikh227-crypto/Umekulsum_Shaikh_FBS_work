#include <stdio.h>

void palindrome()
{
    int n, original, rev, rem;

    printf("Enter 3 digit number: ");
    scanf("%d", &n);

    original = n;
    rev = 0;

    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(original == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

int main()
{
    palindrome();

    return 0;
}