#include<stdio.h>
int main (void)
{
	float b;
	printf("Enter a floating-point value:");
	scanf("%f",&b);
	printf("fixed-point notation: %f\n",b); 
	printf("exponential notation: %e\n",b);
	printf("p notation: %a",b);
 } 
