#include <stdio.h>

int leapyear()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        return 1;
    else
        return 0;
}

int main()
{
    int result;

    result = leapyear();

    if(result == 1)
        printf("Leap Year");
    else
        printf("Not Leap Year");

    return 0;
}