#include <stdio.h>              // printf() ke liye

int mystrncmp(char str1[], char str2[], int n) // First n chars compare
{
    int i;                      // Counter

    for (i = 0; i < n; i++)     // n characters tak
    {
        if (str1[i] != str2[i]) // Characters different
            return str1[i] - str2[i]; // Difference

        if (str1[i] == '\0')    // String end
            return 0;           // Equal
    }

    return 0;                   // Equal
}

int main()
{
    char str1[] = "Hello";      // First string
    char str2[] = "Help";       // Second string

    printf("Result = %d", mystrncmp(str1, str2, 3)); // First 3 compare

    return 0;                   // Program end
}
