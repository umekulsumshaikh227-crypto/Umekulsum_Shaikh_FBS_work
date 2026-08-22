#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World";
    char *ptr;

    ptr = strrchr(str, 'l');

    if (ptr != NULL)
        printf("Last occurrence: %s\n", ptr);
    else
        printf("Character not found\n");

    return 0;
}
