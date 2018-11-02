#include<stdio.h>
#include<string.h> 
int main (void)
{
	char word[30];
	int a,in;
	printf("输入一个单词：");
	scanf("%s", word);
	a = strlen(word);
	for (in = a; in >= 0; in--)
	{
		printf("%c",word[in]);
	}
	return 0;
 } 
