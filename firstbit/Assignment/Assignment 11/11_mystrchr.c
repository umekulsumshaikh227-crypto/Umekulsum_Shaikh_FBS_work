#include <stdio.h>              // printf() aur NULL ke liye

char *mystrchr(char str[], char ch) // First occurrence search
{
    int i = 0;                  // Index

    while (str[i] != '\0')      // String ke end tak
    {
        if (str[i] == ch)       // Character match
            return &str[i];     // Address return

        i++;                    // Next character
    }

    return NULL;                // Character nahi mila
}

int main()
{
    char str[] = "Hello World"; // String

    if (mystrchr(str, 'W') != NULL) // W search
        printf("Character found");
    else
        printf("Character not found");

    return 0;                   // Program end
}
