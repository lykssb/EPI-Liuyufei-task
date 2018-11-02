#include<stdio.h>
#define M_PER_H 60       //一小时有60分钟 
int main (void)
{
	int minute,hour,Surplus_minute;         //分钟，小时，剩余的分钟 
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
