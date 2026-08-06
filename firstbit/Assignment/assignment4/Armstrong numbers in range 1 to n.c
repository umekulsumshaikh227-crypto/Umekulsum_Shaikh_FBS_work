#include<stdio.h>

int main()
{
    int n, i, num, rem, sum, count;

    printf("Enter range: ");
    scanf("%d",&n);

    printf("Armstrong numbers are:\n");

    for(i=1; i<=n; i++)
    {
        num=i;
        sum=0;
        count=0;

        // count digits
        int temp=i;
        while(temp>0)
        {
            count++;
            temp=temp/10;
        }

        temp=i;

        while(temp>0)
        {
            rem=temp%10;

            int power=1;
            for(int j=1; j<=count; j++)
            {
                power=power*rem;
            }

            sum=sum+power;
            temp=temp/10;
        }

        if(sum==num)
        {
            printf("%d ",num);
        }
    }

    return 0;
}