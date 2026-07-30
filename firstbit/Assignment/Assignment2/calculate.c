#include<stdio.h>

void main()
{
    int a, b;
    char op;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("Enter Operator (+,-,*,/,%%): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Answer = %d", a + b);
            break;

        case '-':
            printf("Answer = %d", a - b);
            break;

        case '*':
            printf("Answer = %d", a * b);
            break;

        case '/':
            printf("Answer = %d", a / b);
            break;

        case '%':
            printf("Answer = %d", a % b);
            break;

        default:
            printf("Invalid Operator");
    }
}