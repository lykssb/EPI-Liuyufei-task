#include<stdio.h>
int main (void)
{
	float megabit, megabyte;  /*��λ�����ֽ�*/           
	float time;
	printf("��ã�����������λÿ��Ϊ��λ�������ٶ�:");
	scanf("%f",&megabit);
	printf("�����ֽ�Ϊ��λ���ļ���С��");
	scanf("%f",&megabyte);
	time = megabyte*8/megabit;
	printf("At %.2f megabits per second, a file of %.2f megabytes.\n",megabit,megabyte);
	printf("downloads in %.2f seconds.\n",time); 
}
