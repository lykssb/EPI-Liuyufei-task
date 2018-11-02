#include<stdio.h>
void fun (double c);
int main (void)
{
    double a;
	printf("输入一个数字：");
	scanf("%lf",&a); 
    fun(a);
    return 0;
}
void fun (double c)
{
    double d;
    d = c*c*c;
    printf("%.3lf的三次方是%.3lf。",c,d);
}
