#include<stdio.h>
#include<string.h>
int main (void)
{
	char name[20],name1[20];
	printf("�������������");
	scanf("%s",name);
	printf("����������գ�");
	scanf("%s",name1);
	printf("%s %s\n",name,name1);
	printf("%*d %*d\n",strlen(name),strlen(name),strlen(name1),strlen(name1));
	printf("%s %s\n",name,name1);
	printf("%-*d %-*d\n",strlen(name),strlen(name),strlen(name1),strlen(name1));
}
