#include <stdio.h>              // printf() ke liye

int mystrlen(char str[])        // String length function
{
    int i = 0;                  // Counter 0 se start

    while (str[i] != '\0')      // String ke end tak loop
    {
        i++;                    // Length count karo
    }

    return i;                   // String ki length return
}

int main()
{
    char str[] = "Hello";       // String

    printf("Length = %d", mystrlen(str)); // Length print

    return 0;                   // Program end
}
