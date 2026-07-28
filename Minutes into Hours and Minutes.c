#include<stdio.h>

void main()
{
    int min = 130;
    int hour, rem;

    hour = min / 60;
    rem = min % 60;

    printf("Hours = %d\n", hour);
    printf("Remaining Minutes = %d", rem);
}