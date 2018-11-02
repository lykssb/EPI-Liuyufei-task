/*
#include<stdio.h>
int main (void)
{
	int a, b, d, f;
	double sum_1, sum_2, sum_3, c;
	printf("输入项数：");
	scanf("%d", &a);
	for (b = 1, c = 1, sum_1 = 0; b <= a; b++, c++)
	{
		sum_1 = sum_1 + 1.0 / c;
		printf("%lf %d\n", sum_1, b);
	}
}

----------------------------------------
#include<stdio.h>
#include<math.h>
int main (void)
{
	int a, b, d, f;
	double sum_1, sum_2, sum_3, c;
	printf("输入项数：");
	scanf("%d", &a);
		for (d = 1, c = 1, sum_2 = 0; d <= a; d++, c++)
	{
		f = pow(-1, d - 1);
		sum_2 = sum_2 + f * (1.0 / c);
		printf("%lf %d\n", sum_2, d);
	}
}
*/

#include<stdio.h>
#include<math.h>
int main (void)
{
	int a, b, d, f;
	double sum_1, sum_2, sum_3, c;
	printf("输入项数：");
	scanf("%d", &a);
	while (a > 0)
	{
		for (b = 1, c = 1, sum_1 = 0; b <= a; b++, c++)
	    {
		sum_1 = sum_1 + 1.0 / c;
	    }
	    printf("%lf %d\n", sum_1, b - 1);
	    for (d = 1, c = 1, sum_2 = 0; d <= a; d++, c++)
	    {
		f = pow(-1, d - 1);
		sum_2 = sum_2 + f * (1.0 / c);
	    }
	    printf("%lf %d\n", sum_2, d - 1);
	    sum_3 = sum_1 + sum_2;
	    printf("两种无限序列的和是%lf\n", sum_3);
	    printf("输入次数：");
	    scanf("%d", &a);
	}
	printf("ENd");
	return 0;
} 

