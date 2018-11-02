/*  ´íÎóµÄ 
#include<stdio.h>
int main (void)
{
	int a,b;
	char ch;
	for (a = 1; a < 7; a++)
	{
		for (ch = ('G' - a); ch < 'G'; ch++)
		   printf("%c",ch);
		printf("\n");   
	}
	return 0;
}         */
#include<stdio.h>
int main (void)
{
	int a,b;
	char ch;
	for (a = 1; a < 7; a++)
	{
		for (ch = 'F'; ch >= ('G' - a); ch--)
		   printf("%c",ch);
		printf("\n");   
	}
	return 0;
}












 
