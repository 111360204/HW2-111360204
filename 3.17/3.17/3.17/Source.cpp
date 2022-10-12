#include<stdio.h>

int main()
{
	int a;
	float b, c, d, e,f;

	while (1)
	{
		printf("\n");
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &a);
		if (a ==-1)
			break;
		printf("Enter beginning balance:");
		scanf_s("%f", &b);
		printf("Enter total charges:");
		scanf_s("%f", &c);
		printf("Enter total credits:");
		scanf_s("%f", &d);
		printf("Enter credit limit:");
		scanf_s("%f", &e);
		f = b + d;
		if (f > e)
		{
			printf("Account:\t%d\n", a);
			printf("Credit limit:\t%.2f\n", e);
			printf("Balance:\t%.2f\n", f);
			printf("Credit Limit Exceeded.");
			printf("\n");
		}
	}
	return 0;
}