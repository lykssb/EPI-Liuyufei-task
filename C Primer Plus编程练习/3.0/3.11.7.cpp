#include<stdio.h>
int main (void)
{
	char name[30];
	int height;
	float height_cm;
	printf("��ã����������ʲô��");
	scanf("%s",&name);
	printf("%s,�����������ߣ�",name); 
	scanf("%d",&height); 
    height_cm = height*2.54;
    printf("\n��������%dӢ�磬Ҳ��%.2f���ס�\n",height,height_cm);
}
