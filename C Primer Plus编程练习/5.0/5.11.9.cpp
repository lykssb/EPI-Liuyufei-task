#include<stdio.h>
void Temperatures (double c);
int main ()
{
	double a,status;
	printf("����һ�������¶ȣ�");
	status = scanf("%lf",&a);
	while(status == 1)
	{
		Temperatures(a);
		printf("����һ���µĻ����¶ȣ�����q���أ���");
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
	printf("%.3lf�����¶���%.3lf�������¶Ȼ�%.3lf�Ŀ����¶ȡ�\n",c,Ct,Kt);
}
