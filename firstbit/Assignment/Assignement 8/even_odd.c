#include<stdio.h>
int main()
{
	int arr[5]={10,15,20,25,30};
	int i;
	
	printf("even number:\n");
	
	for(i=0; i<5; i++)
	{
		if(arr[i]%2 ==0)
		{
			printf("%d",arr[i]);
		}
	}
	printf("\nodd numbers:\n");
		for(i=0; i<5; i++)
	{
		if(arr[i]%2 !=0)
		{
			printf("%d",arr[i]);
}
}
return 0;
}