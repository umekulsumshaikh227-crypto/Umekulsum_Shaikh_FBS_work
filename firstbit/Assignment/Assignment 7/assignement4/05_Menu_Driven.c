#include <stdio.h>

void menuOperations(int *num, int *choice)
{
    int i, isPrime;
    int original;
    int reverse = 0;
    int digit;
    int sum = 0;

    switch (*choice)
    {
        case 1:
            if (*num % 2 == 0)
                printf("Even Number");
            else
                printf("Odd Number");
            break;

        case 2:
            isPrime = 1;

            if (*num <= 1)
                isPrime = 0;
            else
            {
                for (i = 2; i <= *num / 2; i++)
                {
                    if (*num % i == 0)
                    {
                        isPrime = 0;
                        break;
                    }
                }
            }

            if (isPrime)
                printf("Prime");
            else
                printf("Not Prime");
            break;

        case 3:
            original = *num;

            while (*num > 0)
            {
                digit = *num % 10;
                reverse = reverse * 10 + digit;
                *num = *num / 10;
            }

            if (reverse == original)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;

        case 4:
            if (*num > 0)
                printf("Positive");
            else if (*num < 0)
                printf("Negative");
            else
                printf("Zero");
            break;

        case 5:
            while (*num > 0)
            {
                digit = *num % 10;
                reverse = reverse * 10 + digit;
                *num = *num / 10;
            }

            printf("Reverse = %d", reverse);
            break;

        case 6:
            while (*num > 0)
            {
                digit = *num % 10;
                sum = sum + digit;
                *num = *num / 10;
            }

            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }
}

int main()
{
    int num;
    int choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n1. Even or Odd");
    printf("\n2. Prime or Not");
    printf("\n3. Palindrome or Not");
    printf("\n4. Positive, Negative or Zero");
    printf("\n5. Reverse a Number");
    printf("\n6. Sum of Digits");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    menuOperations(&num, &choice);

    return 0;
}
