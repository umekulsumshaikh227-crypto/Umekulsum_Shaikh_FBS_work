#include <stdio.h>              // printf() aur NULL ke liye

char *mystrrchr(char str[], char ch) // Last occurrence search
{
    int i = 0;                  // Index
    char *last = NULL;          // Last match store karega

    while (str[i] != '\0')      // String ke end tak
    {
        if (str[i] == ch)       // Character match
            last = &str[i];     // Last match ka address save

        i++;                    // Next character
    }

    return last;                // Last occurrence return
}

int main()
{
    char str[] = "Hello World"; // String

    if (mystrrchr(str, 'l') != NULL) // Last l search
        printf("Last occurrence found");
    else
        printf("Character not found");

    return 0;                   // Program end
}
