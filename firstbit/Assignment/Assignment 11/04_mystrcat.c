#include <stdio.h>              // printf() ke liye

void mystrcat(char str1[], char str2[]) // Concatenation function
{
    int i = 0;                  // str1 ka index
    int j = 0;                  // str2 ka index

    while (str1[i] != '\0')     // str1 ke end tak
        i++;

    while (str2[j] != '\0')     // str2 ke end tak
    {
        str1[i] = str2[j];      // str2 ka character str1 me add
        i++;                    // str1 ka next position
        j++;                    // str2 ka next character
    }

    str1[i] = '\0';             // New string ka end
}

int main()
{
    char str1[100] = "Hello ";  // First string
    char str2[] = "World";      // Second string

    mystrcat(str1, str2);       // Dono strings join

    printf("Result = %s", str1); // Result print

    return 0;                   // Program end
}
