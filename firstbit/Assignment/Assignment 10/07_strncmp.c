#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Help";

    if (strncmp(str1, str2, 3) == 0)
        printf("First 3 characters are equal\n");
    else
        printf("First 3 characters are not equal\n");

    return 0;
}
