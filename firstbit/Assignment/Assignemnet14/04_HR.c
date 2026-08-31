#include<stdio.h>

struct HR
{
    int id;
    char name[50];
    float salary;
    float commission;
};

void store(struct HR *h)
{
    printf("Enter ID: ");
    scanf("%d", &h->id);

    printf("Enter Name: ");
    scanf("%s", h->name);

    printf("Enter Salary: ");
    scanf("%f", &h->salary);

    printf("Enter Commission: ");
    scanf("%f", &h->commission);
}

void display(struct HR *h)
{
    printf("\nID: %d", h->id);
    printf("\nName: %s", h->name);
    printf("\nSalary: %.2f", h->salary);
    printf("\nCommission: %.2f", h->commission);
}

void main()
{
    struct HR h;

    store(&h);
    display(&h);
}