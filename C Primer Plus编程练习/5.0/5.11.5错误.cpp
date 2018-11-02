#include<stdio.h>
int main (void)
{
	int count, sum, n;
	count = 0;
	sum = 0;
	printf("Enter an integer:");
	scanf("%d",&n);
	while(n > 0)
	{
		while(count++ < n)
        {
			sum = sum + count;
		}
		printf("sum = %d\n",sum);
		printf("Enter an integer(<= 0 to quit):");
		scanf("%d",&n);
	}
	
	printf("bye");
}
