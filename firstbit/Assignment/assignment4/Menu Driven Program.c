#include<stdio.h>

int main()
{
    int choice, num, i, count, rem, rev=0, sum=0, temp;

    printf("Enter number: ");
    scanf("%d",&num);

    printf("\n1. Even or Odd");
    printf("\n2. Prime or Not");
    printf("\n3. Palindrome");
    printf("\n4. Positive Negative Zero");
    printf("\n5. Reverse Number");
    printf("\n6. Sum of Digits");

    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            if(num%2==0)
                printf("Even number");
            else
                printf("Odd number");
            break;


        case 2:
            count=0;

            for(i=1;i<=num;i++)
            {
                if(num%i==0)
                    count++;
            }

            if(count==2)
                printf("Prime number");
            else
                printf("Not Prime");
            break;


        case 3:
            temp=num;

            while(num>0)
            {
                rem=num%10;
                rev=rev*10+rem;
                num=num/10;
            }

            if(temp==rev)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;


        case 4:
            if(num>0)
                printf("Positive");
            else if(num<0)
                printf("Negative");
            else
                printf("Zero");
            break;


        case 5:
            temp=num;

            while(num>0)
            {
                rem=num%10;
                rev=rev*10+rem;
                num=num/10;
            }

            printf("Reverse = %d",rev);
            break;


        case 6:
            while(num>0)
            {
                rem=num%10;
                sum=sum+rem;
                num=num/10;
            }

            printf("Sum of digits = %d",sum);
            break;


        default:
            printf("Invalid choice");
    }

    return 0;
}