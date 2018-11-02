#include<stdio.h>
int main (void)
{
	double a[8], b[8];
	int c;
	printf("输入8个浮点数：");
	for (c = 0; c < 8; c++)
	{
		scanf("%lf", &a[c]);
	}
	b[0] = a[0];
	for (c = 1; c < 8; c++)
	{
		b[c] = b[c - 1] + a[c]; 
	}
	for (c = 0; c < 8; c++)
	{
		printf("%-5.1lf", a[c]);
	}
	printf("\n");
	for (c = 0; c < 8; c++)
	{
		printf("%-5.lf", b[c]);
	}
	return 0;
}
