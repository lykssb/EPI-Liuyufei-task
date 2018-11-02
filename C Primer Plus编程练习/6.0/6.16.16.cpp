#include<stdio.h>
int main (void)
{
	float a, b;
	int year = 0;
	a = 100;
	b = 100;
	while (a >= b)
	{
		year++;
		a += 0.1 * 100;
		b = 1.05 * b;
	}
	printf("Daphne的余额是%5.2f，Deirdre的余额是%5.2f，共用了%d年。", a, b, year);
}
