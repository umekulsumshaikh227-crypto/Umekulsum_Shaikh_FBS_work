#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "ABC";
    char str2[] = "ABC";

    if (memcmp(str1, str2, 3) == 0)
        printf("Memory blocks are equal\n");
    else
        printf("Memory blocks are not equal\n");

    return 0;
}
