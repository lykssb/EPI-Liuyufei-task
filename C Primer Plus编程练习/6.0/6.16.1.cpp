#include<stdio.h>
int main (void)
{
	char a[26];
	int b;
	printf("ÊäÈë26¸öĞ¡Ğ´×ÖÄ¸£º");
	for (b = 1; b < 27; b++)
	{
		scanf("%c", &a[b]);
	}
	for (b = 1; b < 27; b++ )
	{
		printf("%c ", a[b]);
	}
	return 0;
}
