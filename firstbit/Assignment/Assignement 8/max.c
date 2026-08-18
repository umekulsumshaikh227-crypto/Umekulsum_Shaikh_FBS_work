#include<stdio.h>
int main()
{
	int arr[5]={10,20,5,86,15};
	int i;
	int min= arr[0];
	int max=arr[0];
	
	
	for(i=1; i<5; i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
			
		}
		if (arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("minimum number =%d\n",min);
	printf("maximum number=%d\n",max);
	
	return 0;
}