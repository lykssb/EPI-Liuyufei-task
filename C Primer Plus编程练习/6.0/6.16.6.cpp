#include<stdio.h>
int main (void)
{
	int a,b,c,n,m,status;
	printf("输入一个上限和一个下限：");
	status = scanf("%d %d",&n,&m);
	while(n < m, status ==2)
	{
		for (a = n; a<=m; a++)
	    {
	    	b = a * a;
		    c = a * a * a;
		    printf("%d, %d, %d\n", a, b, c);
		}
		printf("输入一个上限和下限（输入q退出）：");
		status = scanf("%d %d",&n,&m); 
	}
    printf("Done");
 } 
