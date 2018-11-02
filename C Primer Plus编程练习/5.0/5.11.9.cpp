#include<stdio.h>
void Temperatures (double c);
int main ()
{
	double a,status;
	printf("输入一个华氏温度：");
	status = scanf("%lf",&a);
	while(status == 1)
	{
		Temperatures(a);
		printf("输入一个新的华氏温度（输入q返回）：");
		status = scanf("%lf",&a); 
	}
	printf("Done!"); 
	return 0;
}
void Temperatures (double c)
{
	double Ct,Kt;
	Ct = 5.0/9.0*(c - 32.0);
	Kt = Ct + 273.16;
	printf("%.3lf华氏温度是%.3lf的摄氏温度或%.3lf的开氏温度。\n",c,Ct,Kt);
}
