#include <stdio.h>

void palindrome(int n)
{
    int original, rev, rem;

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
    int n;

    printf("Enter 3 digit number: ");
    scanf("%d", &n);

    palindrome(n);

    return 0;
}