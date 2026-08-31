#include<stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

void store(struct Student *s)
{
    printf("Enter Roll Number: ");
    scanf("%d", &s->rollNo);

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}

void display(struct Student *s)
{
    printf("\nRoll Number: %d", s->rollNo);
    printf("\nName: %s", s->name);
    printf("\nMarks: %.2f", s->marks);
}

void main()
{
    struct Student s;

    store(&s);
    display(&s);
}