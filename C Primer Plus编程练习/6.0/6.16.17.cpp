#include<stdio.h>
int main (void)
{
	double a = 1e6;
	double b;
	int year;
	printf("����   ȡ��10��  ʣ��\n");
	for (year = 0; a > 0; )
	{
		b = 1.08 * a;
		a = b - 1e5;
		year++;
		printf("%10.2lf��Ԫ��%10.2lf��Ԫ��\n", b, a); 
	}
	printf("Chuckie����%d��ȡ��������Ǯ��", year);
} 
