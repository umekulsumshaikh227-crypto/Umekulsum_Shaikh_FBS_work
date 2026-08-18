#include <stdio.h>

void calculate(int *a, int *b, char *op)
{
    switch (*op)
    {
        case '+':
            printf("Result = %d", *a + *b);
            break;
        case '-':
            printf("Result = %d", *a - *b);
            break;
        case '*':
            printf("Result = %d", *a * *b);
            break;
        case '/':
            if (*b != 0)
                printf("Result = %d", *a / *b);
            else
                printf("Cannot divide by zero");
            break;
        case '%':
            if (*b != 0)
                printf("Result = %d", *a % *b);
            else
                printf("Cannot divide by zero");
            break;
        default:
            printf("Invalid operator");
    }
}

int main()
{
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, /, *, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    calculate(&a, &b, &op);

    return 0;
}
