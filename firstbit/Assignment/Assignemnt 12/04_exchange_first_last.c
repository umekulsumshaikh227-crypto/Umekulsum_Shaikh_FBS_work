#include <stdio.h>

int main()
{
    char str[100], temp;
    int last = 0;

    printf("Enter string: ");
    scanf(" %[^\n]", str);

    while (str[last] != '\0')
    {
        last++;
    }

    last--;

    temp = str[0];
    str[0] = str[last];
    str[last] = temp;

    printf("New string = %s", str);

    return 0;
}
