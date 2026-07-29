#include<stdio.h>
void main()
{
	int no =30;
	int a,b,c;
	
	
	a=no/100;
	b=(no/10)%10;
	c=no%10;
	
	if(a == c)
	{
		printf("palindrome number");
	}
	else
	{
		printf("Not palindrome number");
	}
}