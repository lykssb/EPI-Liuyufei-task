#include<stdio.h>
int main (void)
{
	int a,b,c;
	printf("This program computes moduli.\n");
	printf("Enter ab integer to serve as the second operand:");
    scanf("%d",&a);
	printf("Now enter the first operand:");
	scanf("%d",&b);
	while(b >= 0 )
	{
		c = b % a;
		printf("%d %% %d is %d\n", b, a, c);
		printf("Enter next number for first operand (<= 0 to quit):");
	    scanf("%d",&b);
	}
	printf("Done");
	return 0;
}
