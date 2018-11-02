/* 这是错误的编程 */ 
#include<stdio.h>
int main (void)
{
	int a;
	printf("Please input a integer:");
	scanf("%d",&a);
	while(a<=a+10)         //这里它永远成立 
	{
		printf("%d ",a);
		a++;
	}
	printf("End!");
}
