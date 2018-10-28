#include<stdio.h>
int main (void)
{
	int years;
	float seconds;
	double a = 3.156e+07;
	printf("请输入你的年龄：");
	scanf("%d",&years);
	seconds = years*a;
	printf("你的年龄是%d,它对应的秒数是%e",years,seconds);
	 
 } 
