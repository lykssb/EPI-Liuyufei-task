#include<stdio.h>
#include<string.h>
int main (void)
{
	char password[20];
	int a = 5;
	printf("�������룺");
	scanf("%s", password);
    while (strcmp(password,"kidlio123") != 0, a > 0)
    {
    	printf("�������������루�㻹��%d�λ��ᡣ����", a);
    	scanf("%s", password); 
    	a--;
	}
	printf("zhengque");
}
