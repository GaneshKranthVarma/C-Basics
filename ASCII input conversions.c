/* ASCII input conversions */
#include<stdio.h>
void main()
{
   int n;
   printf("Enter a number (from 1-26): ");
   scanf("%d", &n);
   n=n+96;
   printf("%C",n);
}
