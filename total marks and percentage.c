#include<stdio.h>

void main()
{
    int m1 = 80, m2 = 75, m3 = 90, m4 = 85, m5 = 70;
    int total;
    float percentage;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("Total = %d\n", total);
    printf("Percentage = %.2f%%", percentage);
}