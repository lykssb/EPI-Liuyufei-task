#include<stdio.h>
int main (void)
{
	int a = 5, b;
	int week = 1;
	while ( a < 150)
    {
    	b = a;
    	a = (a - week) * 2;
    	week++;
		printf("(%d - %d) * 2 = %d\n", b, week - 1, a);
	}
 } 
