#include<stdio.h>
#include<math.h>
int main (void)
{
	int a[8], b, n;
	int c = 0;
	for (b = 1, c = 0; b <= 8; b++, c++)
	{
		n = pow (2 , b);
		a[c] = n; 
		printf("%-4d", a[c]);
	}
	printf("\nb = %d, c = %d\n",b, c);
	b = 1 , c = 0;
	do 
	{
		printf("%-4d", a[c]);
		b++;
		c++;
	} while (b <= 8);
	return 0;
}
