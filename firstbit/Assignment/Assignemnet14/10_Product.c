#include<stdio.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

void store(struct Product *p)
{
    printf("Enter Product ID: ");
    scanf("%d", &p->id);

    printf("Enter Product Name: ");
    scanf("%s", p->name);

    printf("Enter Quantity: ");
    scanf("%d", &p->quantity);

    printf("Enter Price: ");
    scanf("%f", &p->price);
}

void display(struct Product *p)
{
    printf("\nProduct ID: %d", p->id);
    printf("\nProduct Name: %s", p->name);
    printf("\nQuantity: %d", p->quantity);
    printf("\nPrice: %.2f", p->price);
}

void main()
{
    struct Product p;

    store(&p);
    display(&p);
}