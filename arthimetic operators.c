/* All arithmetic operations in c*/
#include<stdio.h>
void main()
{
//variable declaration
	int a,b,c,d,e,f,g,h;
	a=10;
	b=2;
    c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	h=c+d+e+f+g;
//output
	printf("sum of %d and %d is %d",a,b,c);
	printf("\n differnce between %d and %d is %d",a,b,d);
	printf("\n product of %d and %d is %d",a,b,e);
	printf("\n quotient when %d is divided by %d is %d",a,b,f);
	printf("\n remainder when %d is divided by %d is %d",a,b,g);
	printf("\n sum of all arithmetic operations is %d",h);
}
