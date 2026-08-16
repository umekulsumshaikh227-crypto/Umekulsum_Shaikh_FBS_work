#include <stdio.h>

int main()
{
    float celsius = 30;
    float fahrenheit;

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit = %.2f", fahrenheit);

    return 0;
}
