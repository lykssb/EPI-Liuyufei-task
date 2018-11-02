#include<stdio.h>
int main (void)
{
	int a[8];
	int b, c;
	printf("输入8个整数："); 
	for (b = 0; b < 8; b++)
	{ 
		scanf("%d", &a[b]);
	}
	for (c = 7; c >= 0; c--)
	{
		printf("%3d", a[c]);
	}
	return 0;
}
