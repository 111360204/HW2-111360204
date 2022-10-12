#include<stdio.h>

int main()
{
	float interest, principal, rate;
	int days;
	const int a = 365;
	while (1)
	{
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &principal);
		if (principal == -1)
			break;
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &days);
		interest = principal * rate*days / a;
		printf("The interest charge is $%.2f\n\n",interest);
	}
	return 0;
}