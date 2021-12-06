#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number to check if it is positive or negative");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is positive",a);
	}
	else
	{
		printf("%d is negative",a);
	}
}
