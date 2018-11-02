#include<stdio.h>
#include<string.h>
int main (void)
{
	int b;
	char a[255];
	printf("ÊäÈëÒ»´®×Ö·û£º");
	scanf("%s", a);
	b = strlen(a);
	printf("%s %d\n", a, b);
	for (; b > 0; b--)
	{
		printf("%c", a[b-1]);
	}
	return 0;
}
