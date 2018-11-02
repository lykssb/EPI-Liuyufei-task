/*
#include<stdio.h>
int main (void)
{
	int a,b;
	char ch = '$';
	for (a = 6; a > 1; a--)
	{
		for (b = a - 1; b < 6 ; b++)
		    printf("%c", ch);
	printf("\n"); 
	 } 
	return 0; 
}
*/
#include<stdio.h>
int main (void)
{
	int a,b;
	char ch = '$';
	for (a = 1; a < 6; a++)
	{
		for (b = a; b > 0; b--)
		  printf("%c", ch);
		printf("\n"); 
	}
	return 0;
}
