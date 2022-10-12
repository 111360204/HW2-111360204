#include<stdio.h>

int main()
{
	int a; //設a為code
	int	f; //設為工作時間
	int g; //存放code2的薪資
	int	h; //設定此為銷售量
	float j; //存放code3的薪資
	const int b = 1000; //設這個為manager的週薪
	const int c = 10; //設這個為時薪
	const int d = 15; //這個為時薪的1.5倍
	const int e = 350;//設這個為pieceworkers的週薪
	const int i = 250;//這個為commission worker的基本工資
	printf("Enter your own paycode:");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
		printf("your identity is manager\n");
		printf("your weekly salary is %dUSD", b);
		break;
	case 2:
		printf("your identity is hourly worker\n");
		printf("how many hours did you work?");
		scanf_s("%d", &f);
		if (f <= 40)
			g = f * c;
		else
			g = 400 + (f - 40)*d;
		printf("your weekly salary is %dUSD", g);
		break;
	case 3:
		printf("your identity is commission worker\n");
		printf("Enter gross weekly sales:");
		scanf_s("%d", &h);
		j = i + (h*0.0057);
		printf("your weekly salary is %.2fUSD", j);
		break;
	case 4:
		printf("your identity is pieceworker\n");
		printf("your weekly salary is %dUSD", e);
		break;
	default:
		printf("error code!\n");
		break;
	}
	return 0;
}