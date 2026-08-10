#include<stdio.h>
void evenodd(int n)
{
 if(n % 2 == 0)
	printf("Even");
 else
	printf("Odd");
}
int main()
{
	int n;
	printf("enter number ");
	scanf("d",&n);
	
	evenodd(n);
	
	return 0;
	
}