#include<stdio.h>
#include<string.h> 
int main (void)
{
	char word[30];
	int a,in;
	printf("����һ�����ʣ�");
	scanf("%s", word);
	a = strlen(word);
	for (in = a; in >= 0; in--)
	{
		printf("%c",word[in]);
	}
	return 0;
 } 
