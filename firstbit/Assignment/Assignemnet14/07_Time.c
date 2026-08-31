#include<stdio.h>

struct Time
{
    int hour;
    int min;
    int sec;
};

void store(struct Time *t)
{
    printf("Enter Hour: ");
    scanf("%d", &t->hour);

    printf("Enter Minutes: ");
    scanf("%d", &t->min);

    printf("Enter Seconds: ");
    scanf("%d", &t->sec);
}

void display(struct Time *t)
{
    printf("\nTime: %d:%d:%d", t->hour, t->min, t->sec);
}

void main()
{
    struct Time t;

    store(&t);
    display(&t);
}