#include<stdio.h>
#include<string.h>
int main (void)
{
	char password[20];
	int a = 5;
	printf("输入密码：");
	scanf("%s", password);
    while (strcmp(password,"kidlio123") != 0, a > 0)
    {
    	printf("请重新输入密码（你还有%d次机会。）：", a);
    	scanf("%s", password); 
    	a--;
	}
	printf("zhengque");
}
