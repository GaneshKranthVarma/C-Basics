#include<stdio.h>
void main()
{
   char ch;
   printf("Enter a character (from A-Z): ");
   scanf("%c", &ch);
   ch=ch-64;
   printf("%d",ch);
}
