#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Hello ";
    char str2[] = "World";

    strncat(str1, str2, 3);

    printf("Joined string = %s\n", str1);

    return 0;
}
