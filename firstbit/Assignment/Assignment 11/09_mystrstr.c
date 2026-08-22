#include <stdio.h>              // printf() aur NULL ke liye

char *mystrstr(char str[], char sub[]) // Substring search function
{
    int i, j;                   // Index variables

    for (i = 0; str[i] != '\0'; i++) // Main string me search
    {
        j = 0;                  // Substring index reset

        while (sub[j] != '\0' && str[i + j] == sub[j]) // Match check
            j++;

        if (sub[j] == '\0')     // Puri substring mil gayi
            return &str[i];     // Match ka address return
    }

    return NULL;                // Match nahi mila
}

int main()
{
    char str[] = "Hello World"; // Main string
    char sub[] = "World";       // Search string

    if (mystrstr(str, sub) != NULL) // Search result check
        printf("Substring found");
    else
        printf("Substring not found");

    return 0;                   // Program end
}
