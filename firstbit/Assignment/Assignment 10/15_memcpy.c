#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Hello";
    char destination[20];

    memcpy(destination, source, strlen(source) + 1);

    printf("Copied string = %s\n", destination);

    return 0;
}
