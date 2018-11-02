#include<stdio.h>
int main (void)
{
	int day,week,S_day;
	printf("Please input days£º");
	scanf("%d",&day);
	while(day>0)
	{
		week = day/7;
		S_day = day%7;
		printf("%d days are %d weeks, %d days.\n", day, week, S_day);
		printf("Please input days:");
		scanf("%d",&day);
	}
	printf("End!");
	return 0;
}
