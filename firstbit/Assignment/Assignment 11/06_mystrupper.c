#include <stdio.h>              // printf() ke liye

void mystrupper(char str[])     // Uppercase function
{
    int i = 0;                  // Index

    while (str[i] != '\0')      // String ke end tak
    {
        if (str[i] >= 'a' && str[i] <= 'z') // Lowercase check
            str[i] = str[i] - 32; // Lowercase ko uppercase banao

        i++;                    // Next character
    }
}

int main()
{
    char str[] = "hello world"; // Lowercase string

    mystrupper(str);            // Uppercase me convert

    printf("Uppercase = %s", str); // Result

    return 0;                   // Program end
}
