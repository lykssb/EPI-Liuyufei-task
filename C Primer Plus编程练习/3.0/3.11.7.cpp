#include<stdio.h>
int main (void)
{
	char name[30];
	int height;
	float height_cm;
	printf("你好，你的名字是什么？");
	scanf("%s",&name);
	printf("%s,请输入你的身高：",name); 
	scanf("%d",&height); 
    height_cm = height*2.54;
    printf("\n你的身高是%d英寸，也是%.2f厘米。\n",height,height_cm);
}
