#include<stdio.h>

void main()
{
    int n, temp, rem, rev=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    temp=n;

    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }

    if(rev==n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}