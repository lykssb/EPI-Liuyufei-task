#include<stdio.h>
#include<string.h>
int main (void)
{
	char name[40];
	int width;
	printf("���������������\n");
	scanf("%s",name);
	printf("��ã�\"%0s\"\n",name); 
	printf("\"%020s\"\n",name);
	printf("\"%-020s\"\n",name);
    printf("%d\n",strlen(name));
	width = strlen(name) + 3;
	printf("\"%0*s\"",width,name);
}
