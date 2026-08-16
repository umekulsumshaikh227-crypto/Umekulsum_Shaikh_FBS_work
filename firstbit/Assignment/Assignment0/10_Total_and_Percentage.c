#include <stdio.h>

int main()
{
    int marks1 = 80;
    int marks2 = 75;
    int marks3 = 90;
    int marks4 = 85;
    int marks5 = 70;

    int total;
    float percentage;

    total = marks1 + marks2 + marks3 + marks4 + marks5;

    percentage = (total / 500.0) * 100;

    printf("Total marks = %d\n", total);
    printf("Percentage = %.2f%%", percentage);

    return 0;
}
