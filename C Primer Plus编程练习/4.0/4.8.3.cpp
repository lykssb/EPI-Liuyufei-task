#include<stdio.h>
int main (void)
{
	double a;
	printf("����һ������С�������֣�");
	scanf("%lf",&a);
	printf("The input is %.1lf 0r %.1le.\n",a,a);
	printf("The input is %+.3lf or %+.3le.\n",a,a);
}
