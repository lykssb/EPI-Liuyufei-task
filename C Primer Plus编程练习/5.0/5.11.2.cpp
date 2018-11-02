#include<stdio.h>
int main (void)
{
	int a,b;
	printf("Please input a integer:");
	scanf("%d",&a);
	b = a + 10;
	while(a<=b)
	{
		printf("%d ",a);
		a++;
	}
	printf("End!");
	return 0;
}
