#include<stdio.h>
int main (void)
{
	int kuatuo;
	unsigned int zhiliang;
	double num,a;
	a = 3.0e-23;
	printf("����ˮ�Ŀ�������");
	scanf("%d",&kuatuo) ;
	zhiliang = kuatuo*15;
	printf("����%d���ѵ�ˮ���൱��%d�˵�ˮ��\n",kuatuo,zhiliang);
	num = zhiliang/a;
	printf("�൱��%e��ˮ����",num);
}

