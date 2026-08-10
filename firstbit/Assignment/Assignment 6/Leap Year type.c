#include <stdio.h>

void leapyear()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        printf("Leap Year");
    else
        printf("Not Leap Year");
}

int main()
{
    leapyear();

    return 0;
}