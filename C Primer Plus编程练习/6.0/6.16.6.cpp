#include<stdio.h>
int main (void)
{
	int a,b,c,n,m,status;
	printf("����һ�����޺�һ�����ޣ�");
	status = scanf("%d %d",&n,&m);
	while(n < m, status ==2)
	{
		for (a = n; a<=m; a++)
	    {
	    	b = a * a;
		    c = a * a * a;
		    printf("%d, %d, %d\n", a, b, c);
		}
		printf("����һ�����޺����ޣ�����q�˳�����");
		status = scanf("%d %d",&n,&m); 
	}
    printf("Done");
 } 
