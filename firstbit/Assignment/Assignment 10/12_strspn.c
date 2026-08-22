#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "12345ABC";

    printf("Matching characters = %lu\n", strspn(str, "0123456789"));

    return 0;
}
