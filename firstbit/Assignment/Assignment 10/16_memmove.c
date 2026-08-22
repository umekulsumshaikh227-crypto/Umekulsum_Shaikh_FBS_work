#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "HelloWorld";

    memmove(str + 5, str, 5);
    str[10] = '\0';

    printf("After memmove = %s\n", str);

    return 0;
}
