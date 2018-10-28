#include<stdio.h>
int main (void)
{
	int kuatuo;
	unsigned int zhiliang;
	double num,a;
	a = 3.0e-23;
	printf("输入水的夸脱数：");
	scanf("%d",&kuatuo) ;
	zhiliang = kuatuo*15;
	printf("这是%d夸脱的水，相当于%d克的水。\n",kuatuo,zhiliang);
	num = zhiliang/a;
	printf("相当于%e个水分子",num);
}

