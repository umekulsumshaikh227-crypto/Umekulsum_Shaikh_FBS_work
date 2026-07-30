#include<stdio.h>

void main()
{
    int a,b,c;

    printf("Enter Three Numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is Greatest",a);
        }
        else
        {
            printf("%d is Greatest",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is Greatest",b);
        }
        else
        {
            printf("%d is Greatest",c);
        }
    }
}