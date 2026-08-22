#include <stdio.h>              // printf() ke liye

char lowerCase(char ch)         // Character lowercase function
{
    if (ch >= 'A' && ch <= 'Z') // Uppercase check
        return ch + 32;         // Lowercase return

    return ch;                  // Same character return
}

int mystrncasecmp(char str1[], char str2[], int n) // First n case-insensitive compare
{
    int i;                      // Counter

    for (i = 0; i < n; i++)     // n characters tak
    {
        char a = lowerCase(str1[i]); // First character lowercase
        char b = lowerCase(str2[i]); // Second character lowercase

        if (a != b)             // Different
            return a - b;       // Difference return

        if (a == '\0')          // String end
            return 0;           // Equal
    }

    return 0;                   // Equal
}

int main()
{
    char str1[] = "HELLO";      // First string
    char str2[] = "hello";      // Second string

    printf("Result = %d", mystrncasecmp(str1, str2, 3)); // First 3 compare

    return 0;                   // Program end
}
