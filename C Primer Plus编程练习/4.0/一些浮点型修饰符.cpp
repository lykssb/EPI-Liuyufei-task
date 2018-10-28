//一些浮点型修饰符 
#include<stdio.h>
int main (void)
{
	const double rent = 3852.99;
	
	printf("*%f*\n",rent);
	printf("*%e*\n",rent);
	printf("*%4.2f*\n",rent);
	printf("*%3.1f*\n",rent);
	printf("*%10.3f*\n",rent);
	printf("*%10.3E*\n",rent);
	printf("*%+4.2f*\n",rent);
	printf("*%010.2f*\n",rent);
}
