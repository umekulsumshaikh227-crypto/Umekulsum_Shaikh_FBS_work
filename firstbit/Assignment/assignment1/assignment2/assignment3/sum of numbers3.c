#include<stdio.h>
void main()
{
	int start, end, sum=0, i;
	
	printf("Enter start: ");
	scanf("%d",&start);
	
	printf("enter end: ");
	scanf("%d",&end);
	
	for(i=start; i<=end; i++)
	{
		sum=sum+i;
		
	}
	printf ("sum = %d",sum);
	
}