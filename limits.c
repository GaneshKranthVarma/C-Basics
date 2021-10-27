#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short int:\nsigned: %hd to %hi", SHRT_MIN,SHRT_MAX);
	printf("short int:\nUnsigned: %d to %hu", 0,USHRT_MAX);
	printf("short int:\nsigned: %d to %i", INT_MIN,INT_MAX);
    printf("short int:\nUnsigned: %d to %u", 0,UINT_MAX);
	printf("short int:\nsigned: %ld to %li", LONG_MIN,LONG_MAX);
	printf("short int:\nUnsigned: %d to %lu", 0,USHRT_MAX);	
	printf("short int:\nsigned: %lld to %lli", LONG_LONG_MIN,LONG_LONG_MAX);
	printf("short int:\nUnsigned: %d to %llu", 0,USHRT_MAX);
}
