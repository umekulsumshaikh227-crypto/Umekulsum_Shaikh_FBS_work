#include <stdio.h>              // printf() ke liye

char lower(char ch)             // Character ko lowercase function
{
    if (ch >= 'A' && ch <= 'Z') // Uppercase check
        return ch + 32;         // Lowercase return

    return ch;                  // Character same return
}

int mystrcasecmp(char str1[], char str2[]) // Case-insensitive compare
{
    int i = 0;                  // Index

    while (str1[i] != '\0' || str2[i] != '\0') // Dono strings check
    {
        char a = lower(str1[i]); // First character lowercase
        char b = lower(str2[i]); // Second character lowercase

        if (a != b)             // Different characters
            return a - b;       // Difference return

        i++;                    // Next character
    }

    return 0;                   // Strings equal
}

int main()
{
    char str1[] = "HELLO";      // First string
    char str2[] = "hello";      // Second string

    printf("Result = %d", mystrcasecmp(str1, str2)); // Result

    return 0;                   // Program end
}
