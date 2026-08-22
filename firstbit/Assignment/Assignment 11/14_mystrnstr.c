#include <stdio.h>              // printf() aur NULL ke liye

char *mystrnstr(char str[], char sub[], int n) // First n chars me search
{
    int i, j;                   // Index variables

    for (i = 0; str[i] != '\0' && i < n; i++) // n tak search
    {
        j = 0;                  // Substring index

        while (sub[j] != '\0' && str[i + j] != '\0' &&
               i + j < n && str[i + j] == sub[j]) // Match check
            j++;

        if (sub[j] == '\0')     // Substring mil gayi
            return &str[i];     // Address return
    }

    return NULL;                // Match nahi mila
}

int main()
{
    char str[] = "Hello World"; // Main string
    char sub[] = "World";       // Search string

    if (mystrnstr(str, sub, 11) != NULL) // First 11 chars me search
        printf("Substring found");
    else
        printf("Substring not found");

    return 0;                   // Program end
}
