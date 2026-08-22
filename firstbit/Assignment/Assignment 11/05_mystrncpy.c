#include <stdio.h>              // printf() ke liye

void mystrncpy(char dest[], char src[], int n) // Limited copy
{
    int i;                      // Counter

    for (i = 0; i < n && src[i] != '\0'; i++) // n characters tak
        dest[i] = src[i];       // Character copy

    dest[i] = '\0';             // String end
}

int main()
{
    char str1[] = "Programming"; // Source
    char str2[100];              // Destination

    mystrncpy(str2, str1, 5);    // Sirf 5 characters copy

    printf("Result = %s", str2); // Result

    return 0;                   // Program end
}
