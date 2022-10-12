#include<stdio.h>

void HROPS(int a, int b)
{
	int i, j;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= b; j++)
		{
			if (i == 1 || i == a || j == 1 || j == b)
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}
}
int main()
{
	int c, d;
	printf("length?   ");
	scanf_s("%d",&c);
	printf("breadth?  ");
	scanf_s("%d",&d);
	HROPS(c, d);
	return 0;
}