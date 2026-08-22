#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "Hello";

    memset(str, '*', 3);

    printf("After memset = %s\n", str);

    return 0;
}
