#include<stdio.h>
void fun (double c);
int main (void)
{
    double a;
	printf("����һ�����֣�");
	scanf("%lf",&a); 
    fun(a);
    return 0;
}
void fun (double c)
{
    double d;
    d = c*c*c;
    printf("%.3lf�����η���%.3lf��",c,d);
}
