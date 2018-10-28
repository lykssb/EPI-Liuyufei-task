#include<stdio.h>
int main (void)
{
	float height,meter;
	char name[30], name1[30];
	printf("输入你的名字：");
	scanf("%s %s",name,name1);
	printf("你好,%s %s,请以厘米为单位输入你的身高：",name,name1);
	scanf("%f",&height);
	meter = height/100;
	printf("%s %s,you are %.2f meters tall.",name,name1,meter); 
}
