#include<stdio.h>
int main (void)
{
	int a, b, c, d, e, sum;
	printf("����һ������������һ������������");
	scanf("%d %d", &b, &c);
	while ( b < c )
	{
		a = b;
	    sum = 0;
		for ( ;a <= c; a++)
		{
			d = b * b;
			e = c * c;
			sum = sum + a * a;
		}
		printf("The sum of the square from %d to %d is %d\n", d, e, sum);
		printf("��������һ������������һ������������");
		scanf("%d %d", &b, &c);
	}
	printf("Done");
	return 0;
}
