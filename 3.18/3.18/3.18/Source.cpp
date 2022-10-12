#include<stdio.h>

int main()
{
	float sales, salary;
	const int a = 200;
	while (1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f",&sales);
		if (sales == -1)
			break;
		salary = a + (sales*0.09);
		printf("Salary is:$%.2f", salary);
		printf("\n\n");
	}
	return 0;
}