#include<stdio.h>

int main()
{
	float hours, rate, salary;
	const float a = 1.5;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%f", &hours);
		if (hours == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &rate);
		if (hours>40)
		{
			int const b = 40;
			salary = b * rate + (hours - b)*rate*a;
		}
		else
		{
			salary = hours * rate;
		}
		printf("Salary is $%.2f\n\n", salary);
	}
	return 0;
}