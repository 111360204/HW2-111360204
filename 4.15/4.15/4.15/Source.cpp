#include<stdio.h>
#include<cmath>

int main()
{
	printf("years\t\tamount on deposit\n");
	const int base = 5000;
	int years;
	float total,rate=0.1;
	for (int i=0;i<5;i++)
	{
		for (years = 1; years <= 15; years++)
		{
			total = base * pow(1 + rate, years);
			printf("%d:\t\t%.2f\n", years,total);
		}
		rate += 0.005;
		printf("now rate is=%.3f\n",rate);
	}
	return 0;
}