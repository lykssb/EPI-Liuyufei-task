/* ���Ǵ���ı�� */ 
#include<stdio.h>
int main (void)
{
	int a;
	printf("Please input a integer:");
	scanf("%d",&a);
	while(a<=a+10)         //��������Զ���� 
	{
		printf("%d ",a);
		a++;
	}
	printf("End!");
}
