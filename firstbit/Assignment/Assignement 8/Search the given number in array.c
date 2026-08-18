#include<stdio.h>
int main()
{
	int arr[5] = {10,20,30,40,50};
	int search;
	int i;
	int found = 0;

	printf("enter number to search:");
	scanf("%d",&search);
	
	
	for(i=0; i<5; i++)
	{
		if (arr[i] == search)
		{
			found =1;
			break;
		}
	}
	if (found ==1)
	{
		printf("number found in array.");
		
	}
	else 
	{
		printf("number is not found in array");
	}
	return 0;
}