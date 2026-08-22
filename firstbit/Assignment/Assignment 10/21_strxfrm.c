#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Hello";
    char destination[20];

    strxfrm(destination, source, sizeof(destination));

    printf("Transformed string = %s\n", destination);

    return 0;
}
