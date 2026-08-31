#include<stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void store(struct Employee *e)
{
    printf("Enter ID: ");
    scanf("%d", &e->id);

    printf("Enter Name: ");
    scanf("%s", e->name);

    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}

void display(struct Employee *e)
{
    printf("\nID: %d", e->id);
    printf("\nName: %s", e->name);
    printf("\nSalary: %.2f", e->salary);
}

void main()
{
    struct Employee e;

    store(&e);
    display(&e);
}