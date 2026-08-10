#include <stdio.h>

int leapyear(int year)
{
    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        return 1;
    else
        return 0;
}

int main()
{
    int year, result;

    printf("Enter year: ");
    scanf("%d", &year);

    result = leapyear(year);

    if(result == 1)
        printf("Leap Year");
    else
        printf("Not Leap Year");

    return 0;
}