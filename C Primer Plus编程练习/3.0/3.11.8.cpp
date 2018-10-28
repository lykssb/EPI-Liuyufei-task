#include<stdio.h>
int main (void)
{
	float bei,pintuo,ounce,tangshao,chashao;
	printf("输入杯数:");
	scanf("%f",&bei);
	pintuo = bei/2;
	ounce = bei*8;
    tangshao = ounce*2;
    chashao = tangshao*3;
    printf("这是%.2f杯，等价于%.2f品脱,\n",bei,pintuo);
	printf("%.2f盎司，%.2f汤勺，%.2f茶勺",ounce,tangshao,chashao);
 } 
