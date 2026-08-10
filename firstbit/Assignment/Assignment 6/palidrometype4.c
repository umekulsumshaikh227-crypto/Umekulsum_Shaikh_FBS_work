#include <stdio.h>

int palindrome(int n)
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
        return 1;
    else
        return 0;
}

int main()
{
    int n, result;

    printf("Enter 3 digit number: ");
    scanf("%d", &n);

    result = palindrome(n);

    if(result == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}