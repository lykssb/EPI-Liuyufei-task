#include<stdio.h>
double fun (double d, double e);
int main (void)
{
	double a, b, c;
	int status;
	printf("输入两个浮点数：");
	scanf("%lf %lf", &a, &b);
	do 
	{
		c = fun (a, b);
		printf("%.2lf与%.2lf的差除以两数的和是%.3lf\n", a, b, c);
		printf("输入两个浮点数（输入q退出）：");
		status = scanf("%lf %lf", &a, &b);
	} while(status == 2);
	printf("End");
	return 0;
}

double fun (double d, double e)
{
	double n;
	n = (d - e)/(d * e);
	return n;
}
