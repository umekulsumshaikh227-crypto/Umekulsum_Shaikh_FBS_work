#include <stdio.h>              // printf() ke liye

void mystrcpy(char dest[], char src[])   // String copy function
{
    int i = 0;                  // Index 0 se start

    while (src[i] != '\0')      // Jab tak source string khatam na ho
    {
        dest[i] = src[i];       // Source ka character destination me copy
        i++;                    // Next character par jao
    }

    dest[i] = '\0';             // Destination ke end me NULL character
}

int main()
{
    char str1[100] = "Hello";   // Source string
    char str2[100];             // Destination string

    mystrcpy(str2, str1);       // str1 ko str2 me copy karo

    printf("Copied string = %s", str2); // Result print

    return 0;                   // Program end
}
