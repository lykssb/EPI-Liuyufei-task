#include<stdio.h>
double fun (double d, double e);
int main (void)
{
	double a, b, c;
	int status;
	printf("����������������");
	scanf("%lf %lf", &a, &b);
	do 
	{
		c = fun (a, b);
		printf("%.2lf��%.2lf�Ĳ���������ĺ���%.3lf\n", a, b, c);
		printf("��������������������q�˳�����");
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
