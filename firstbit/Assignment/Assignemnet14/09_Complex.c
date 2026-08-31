#include<stdio.h>

struct Complex
{
    int real;
    int imaginary;
};

void store(struct Complex *c)
{
    printf("Enter Real Number: ");
    scanf("%d", &c->real);

    printf("Enter Imaginary Number: ");
    scanf("%d", &c->imaginary);
}

void display(struct Complex *c)
{
    printf("\nComplex Number: %d + %di", c->real, c->imaginary);
}

void main()
{
    struct Complex c;

    store(&c);
    display(&c);
}