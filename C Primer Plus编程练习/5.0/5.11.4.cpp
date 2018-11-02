#include<stdio.h>
#define FEET_PER_CM 30.48           //一英尺30.48厘米 
#define INCH_PER_CM 2.54            //一英寸2.54厘米 
int main (void)
{
	float height,inch;
	int feet;
	printf("Enter a height in centimeters:");
	scanf("%f",&height);
	while(height>0)
	{
		feet = (int)height/FEET_PER_CM;          //强制类型转换运算符 
		inch = (height-feet*FEET_PER_CM)/INCH_PER_CM; 
		printf("%.1f cm = %d feet, %.1f inches \n", height, feet, inch);
		printf("Enter a height in centimeters");
		printf(" (<=0 to quit) :");
		scanf("%f",&height);
	}
	printf("bye");
	return 0;
}
