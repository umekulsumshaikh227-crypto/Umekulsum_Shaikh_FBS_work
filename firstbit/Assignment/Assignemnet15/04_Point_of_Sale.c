#include <stdio.h>

struct Product
{
    char name[50];
    float price;
    int quantity;
};

int main()
{
    struct Product p[10];
    int n, i;
    float total = 0;

    printf("Enter Number of Products: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Product %d Information\n", i + 1);

        printf("Product Name: ");
        scanf(" %[^\n]", p[i].name);

        printf("Price: ");
        scanf("%f", &p[i].price);

        printf("Quantity: ");
        scanf("%d", &p[i].quantity);

        total = total + (p[i].price * p[i].quantity);
    }

    printf("\n--- CART ---\n");

    for(i = 0; i < n; i++)
    {
        printf("\nProduct: %s\n", p[i].name);
        printf("Price: %.2f\n", p[i].price);
        printf("Quantity: %d\n", p[i].quantity);
        printf("Cost: %.2f\n",
               p[i].price * p[i].quantity);
    }

    printf("\nTotal Cost = %.2f\n", total);

    return 0;
}
