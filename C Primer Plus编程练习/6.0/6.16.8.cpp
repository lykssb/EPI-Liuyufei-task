#include<stdio.h>
int main (void)
{
	double a, b, c, status;
	printf("����������������");
	status = scanf("%lf %lf", &a, &b);
	do
	{
		c = (a - b)/(a * b);
		printf("%.2lf��%.2lf�Ĳ���������ĳ˻���%lf\n", a, b,c);
		printf("�������������ͣ�");
		status = scanf("%lf %lf", &a, &b);
	} while(status == 2);
	printf("����");
	return 0;
 } 
