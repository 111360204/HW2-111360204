#include <stdio.h>

int main()
{
	const int a = 5;
	int b, c;
	printf(" ");

	for (c = 1; c <= a; c++)
	{
		for (b = 1; b <= a - c; b++)
			printf(" ");

		for (b = 1; b <= 2 * c - 1; b++)
			printf("*");

		printf("\n ");
	}

	for (c = 1; c <= a - 1; c++)
	{
		for (b = 1; b <= c; b++)
			printf(" ");

		for (b = 1; b <= 2 * (a - c) - 1; b++)
			printf("*");

		printf("\n ");
	}

	return 0;
}