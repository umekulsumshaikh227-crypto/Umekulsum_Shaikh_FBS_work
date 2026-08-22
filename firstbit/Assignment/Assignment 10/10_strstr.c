#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "I am learning C programming";
    char *ptr;

    ptr = strstr(str, "C programming");

    if (ptr != NULL)
        printf("Substring found: %s\n", ptr);
    else
        printf("Substring not found\n");

    return 0;
}
