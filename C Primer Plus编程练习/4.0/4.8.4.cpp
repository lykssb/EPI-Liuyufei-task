#include<stdio.h>
int main (void)
{
	float height,meter;
	char name[30], name1[30];
	printf("����������֣�");
	scanf("%s %s",name,name1);
	printf("���,%s %s,��������Ϊ��λ���������ߣ�",name,name1);
	scanf("%f",&height);
	meter = height/100;
	printf("%s %s,you are %.2f meters tall.",name,name1,meter); 
}
