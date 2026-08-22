#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";
    char *ptr;

    ptr = strpbrk(str, "aeiou");

    if (ptr != NULL)
        printf("First vowel = %c\n", *ptr);
    else
        printf("No vowel found\n");

    return 0;
}
