#include <stdio.h>              // printf() ke liye

void mystrlower(char str[])     // Lowercase function
{
    int i = 0;                  // Index

    while (str[i] != '\0')      // String ke end tak
    {
        if (str[i] >= 'A' && str[i] <= 'Z') // Uppercase check
            str[i] = str[i] + 32; // Uppercase ko lowercase banao

        i++;                    // Next character
    }
}

int main()
{
    char str[] = "HELLO WORLD"; // Uppercase string

    mystrlower(str);            // Lowercase me convert

    printf("Lowercase = %s", str); // Result

    return 0;                   // Program end
}
