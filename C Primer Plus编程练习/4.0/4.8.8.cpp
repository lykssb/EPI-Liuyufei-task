#include<stdio.h>
#define HUAN1 1.609
#define HUAN2 3.785
int main (void)
{
	float mile,gallon,a;
	float kilometer,litre,b;
	printf("以英里和加仑为单位输入里程数和消耗的汽油量：");
	scanf("%f,%f",&mile,&gallon);
	a = mile/gallon;
	printf("每加仑汽油可以行驶%.1f英里。\n",a); 
	kilometer = mile*HUAN1;
	litre = gallon*HUAN2;
	b = litre/kilometer*100;
	printf("每100公里消耗%.1f升的汽油。\n",b);
}
