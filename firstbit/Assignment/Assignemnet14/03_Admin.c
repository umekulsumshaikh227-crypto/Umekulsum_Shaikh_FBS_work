#include<stdio.h>

struct Admin
{
    int id;
    char name[50];
    float salary;
    float allowance;
};

void store(struct Admin *a)
{
    printf("Enter ID: ");
    scanf("%d", &a->id);

    printf("Enter Name: ");
    scanf("%s", a->name);

    printf("Enter Salary: ");
    scanf("%f", &a->salary);

    printf("Enter Allowance: ");
    scanf("%f", &a->allowance);
}

void display(struct Admin *a)
{
    printf("\nID: %d", a->id);
    printf("\nName: %s", a->name);
    printf("\nSalary: %.2f", a->salary);
    printf("\nAllowance: %.2f", a->allowance);
}

void main()
{
    struct Admin a;

    store(&a);
    display(&a);
}