#include <stdio.h>

void checkPalindrome(int *num)
{
    int original = *num;
    int reverse = 0;
    int digit;

    while (*num > 0)
    {
        digit = *num % 10;
        reverse = reverse * 10 + digit;
        *num = *num / 10;
    }

    if (original == reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

int main()
{
    int num;

    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    checkPalindrome(&num);

    return 0;
}
