#include<stdio.h>
#define FEET_PER_CM 30.48           //һӢ��30.48���� 
#define INCH_PER_CM 2.54            //һӢ��2.54���� 
int main (void)
{
	float height,inch;
	int feet;
	printf("Enter a height in centimeters:");
	scanf("%f",&height);
	while(height>0)
	{
		feet = (int)height/FEET_PER_CM;          //ǿ������ת������� 
		inch = (height-feet*FEET_PER_CM)/INCH_PER_CM; 
		printf("%.1f cm = %d feet, %.1f inches \n", height, feet, inch);
		printf("Enter a height in centimeters");
		printf(" (<=0 to quit) :");
		scanf("%f",&height);
	}
	printf("bye");
	return 0;
}
