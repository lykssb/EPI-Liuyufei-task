#include<stdio.h>
int main (void)
{
	float megabit, megabyte;  /*兆位和兆字节*/           
	float time;
	printf("你好，请输入以兆位每秒为单位的下载速度:");
	scanf("%f",&megabit);
	printf("以兆字节为单位的文件大小：");
	scanf("%f",&megabyte);
	time = megabyte*8/megabit;
	printf("At %.2f megabits per second, a file of %.2f megabytes.\n",megabit,megabyte);
	printf("downloads in %.2f seconds.\n",time); 
}
