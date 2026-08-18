#include <stdio.h>

void calculateDiscount(float *price, char *student)
{
    float discount = 0;
    float finalPrice;

    if (*student == 'y' || *student == 'Y')
    {
        if (*price > 500)
            discount = *price * 20 / 100;
        else
            discount = *price * 10 / 100;
    }
    else
    {
        if (*price > 600)
            discount = *price * 15 / 100;
    }

    finalPrice = *price - discount;

    printf("Discount = %.2f\n", discount);
    printf("Final Price = %.2f", finalPrice);
}

int main()
{
    float price;
    char student;

    printf("Enter purchase price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    calculateDiscount(&price, &student);

    return 0;
}
