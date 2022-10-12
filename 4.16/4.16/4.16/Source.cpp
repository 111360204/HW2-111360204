#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("(A)\n");
	
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("(B)\n");

	for (i = 10; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("(C)\n");

	int k;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf(" ");
		}
		for (k = i; k <= 10; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("(D)\n");

	for (i = 1; i <= 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}