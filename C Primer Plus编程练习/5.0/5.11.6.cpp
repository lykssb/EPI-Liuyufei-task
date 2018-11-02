#include<stdio.h>
int main (void)
{
	int n, sum, max;
	sum = 0;
	n = 0;
	printf("Enter an integer:");
	scanf("%d",&max);
	while(max > 0)
	{
		sum = 0;
		n = 0;
		while(n++ < max)
		{
			sum = sum + n*n;
		}
		printf("%d\n",sum);
		printf("Enter an interger:");
		scanf("%d",&max);
	}
	return 0;
}
