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
	printf("Daphne�������%5.2f��Deirdre�������%5.2f��������%d�ꡣ", a, b, year);
}
