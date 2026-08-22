#include <stdio.h>              // printf() ke liye

int mystrcmp(char str1[], char str2[]) // Compare function
{
    int i = 0;                  // Index

    while (str1[i] != '\0' && str2[i] != '\0') // Dono strings ke end tak
    {
        if (str1[i] != str2[i]) // Agar characters different hain
        {
            return str1[i] - str2[i]; // Difference return
        }

        i++;                    // Next character
    }

    return str1[i] - str2[i];   // Final comparison
}

int main()
{
    char str1[] = "Hello";      // First string
    char str2[] = "Hello";      // Second string

    printf("Result = %d", mystrcmp(str1, str2)); // Result

    return 0;                   // Program end
}
