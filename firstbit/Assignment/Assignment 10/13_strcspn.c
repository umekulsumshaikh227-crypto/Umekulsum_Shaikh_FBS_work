#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello123";

    printf("Characters before digit = %lu\n",
           strcspn(str, "0123456789"));

    return 0;
}
