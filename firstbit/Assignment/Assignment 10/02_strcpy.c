#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[20];

    strcpy(str2, str1);

    printf("Copied string = %s\n", str2);

    return 0;
}
