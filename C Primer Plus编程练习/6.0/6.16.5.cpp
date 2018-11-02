#include<stdio.h>
int main (void)
{
	int a,b,m,n;
	m = 0;
	char ch,c,d;
	printf("ÊäÈëÒ»¸ö×ÖÄ¸£º");
	scanf("%c", &ch);
	n = ch -65;
	for (a = 0; a <= n; a++)
	{
		for (b = a; b <= n-1; b++)
		    printf(" ");
		for (c = 'A'; c <= ('A' + a); c++)
		    printf("%c",c);
	    for (d = (c - 2); d >='A'; d--)
		    printf("%c",d); 
		printf("\n");   
	}
}
