#include<stdio.h>
int main (void)
{
	double a;
	printf("输入一个带有小数的数字：");
	scanf("%lf",&a);
	printf("The input is %.1lf 0r %.1le.\n",a,a);
	printf("The input is %+.3lf or %+.3le.\n",a,a);
}
