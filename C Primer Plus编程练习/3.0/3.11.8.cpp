#include<stdio.h>
int main (void)
{
	float bei,pintuo,ounce,tangshao,chashao;
	printf("���뱭��:");
	scanf("%f",&bei);
	pintuo = bei/2;
	ounce = bei*8;
    tangshao = ounce*2;
    chashao = tangshao*3;
    printf("����%.2f�����ȼ���%.2fƷ��,\n",bei,pintuo);
	printf("%.2f��˾��%.2f���ף�%.2f����",ounce,tangshao,chashao);
 } 
