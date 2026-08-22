#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Apple";
    char str2[] = "Banana";

    if (strcoll(str1, str2) < 0)
        printf("%s comes before %s\n", str1, str2);
    else if (strcoll(str1, str2) > 0)
        printf("%s comes after %s\n", str1, str2);
    else
        printf("Strings are equal\n");

    return 0;
}
