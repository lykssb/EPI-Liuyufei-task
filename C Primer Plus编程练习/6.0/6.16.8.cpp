#include<stdio.h>
int main (void)
{
	double a, b, c, status;
	printf("输入两个浮点数：");
	status = scanf("%lf %lf", &a, &b);
	do
	{
		c = (a - b)/(a * b);
		printf("%.2lf与%.2lf的差除以两数的乘积是%lf\n", a, b,c);
		printf("输入两个浮点型：");
		status = scanf("%lf %lf", &a, &b);
	} while(status == 2);
	printf("结束");
	return 0;
 } 
