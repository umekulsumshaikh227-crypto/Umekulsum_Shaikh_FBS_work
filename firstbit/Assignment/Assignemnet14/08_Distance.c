#include<stdio.h>

struct Distance
{
    int feet;
    float inch;
};

void store(struct Distance *d)
{
    printf("Enter Feet: ");
    scanf("%d", &d->feet);

    printf("Enter Inch: ");
    scanf("%f", &d->inch);
}

void display(struct Distance *d)
{
    printf("\nDistance: %d feet %.2f inch", d->feet, d->inch);
}

void main()
{
    struct Distance d;

    store(&d);
    display(&d);
}