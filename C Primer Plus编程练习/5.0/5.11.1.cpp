#include<stdio.h>
#define M_PER_H 60       //һСʱ��60���� 
int main (void)
{
	int minute,hour,Surplus_minute;         //���ӣ�Сʱ��ʣ��ķ��� 
	printf("Please input a number:");
	scanf("%d",&minute);
	while(minute>0)
	{
		hour = minute/M_PER_H;
	    Surplus_minute = minute%M_PER_H;
	    printf("%d minutes is %d hours and %d minutes.\n",minute,hour,Surplus_minute);
	    printf("Please input a number:");
	    scanf("%d",&minute);
	}
	printf("End!");
	return 0;
 } 
