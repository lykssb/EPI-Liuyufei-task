#include<stdio.h>
int main(void)
{
	int a,c,n = 0;
	char ch = 'A';
	for (a = 1; a < 7; a++)
	{
		n++;
		for (c = 0; c < n; c++) 
		   printf("%c",ch++);
		printf("\n");   
	}
}
