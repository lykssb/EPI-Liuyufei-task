#include<stdio.h>
#define HUAN1 1.609
#define HUAN2 3.785
int main (void)
{
	float mile,gallon,a;
	float kilometer,litre,b;
	printf("��Ӣ��ͼ���Ϊ��λ��������������ĵ���������");
	scanf("%f,%f",&mile,&gallon);
	a = mile/gallon;
	printf("ÿ�������Ϳ�����ʻ%.1fӢ�\n",a); 
	kilometer = mile*HUAN1;
	litre = gallon*HUAN2;
	b = litre/kilometer*100;
	printf("ÿ100��������%.1f�������͡�\n",b);
}
