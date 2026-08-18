#include <stdio.h>

void checkPalindrome(int *n)
{
    int original = *n;
    int reverse = 0;
    int digit;

    while (*n > 0)
    {
        digit = *n % 10;
        reverse = reverse * 10 + digit;
        *n = *n / 10;
    }

    if (reverse == original)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkPalindrome(&n);

    return 0;
}
