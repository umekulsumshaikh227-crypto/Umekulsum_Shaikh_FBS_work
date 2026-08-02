#include<stdio.h>
int main()
{
	int n, temp, rem, sum=0;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	temp=n;
	
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+(rem*rem*rem);
		temp=temp/10;
	}
	if(sum==n)
	   printf("amstrong number");
	else
	    printf("not amstrong number");
}