#include <stdio.h>              // printf() ke liye

void mystrncat(char str1[], char str2[], int n) // Limited concatenate
{
    int i = 0;                  // str1 index
    int j = 0;                  // str2 index

    while (str1[i] != '\0')     // str1 ke end tak
        i++;

    while (str2[j] != '\0' && j < n) // n characters tak
    {
        str1[i] = str2[j];      // str2 ka character add
        i++;                    // Next position
        j++;                    // Next character
    }

    str1[i] = '\0';             // New string end
}

int main()
{
    char str1[100] = "Hello ";  // First string
    char str2[] = "World";      // Second string

    mystrncat(str1, str2, 3);   // Sirf 3 chars add

    printf("Result = %s", str1); // Result

    return 0;                   // Program end
}
