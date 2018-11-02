#include<stdio.h>
int main (void)
{
	double a = 1e6;
	double b;
	int year;
	printf("增长   取走10万  剩余\n");
	for (year = 0; a > 0; )
	{
		b = 1.08 * a;
		a = b - 1e5;
		year++;
		printf("%10.2lf美元，%10.2lf美元。\n", b, a); 
	}
	printf("Chuckie用了%d年取完了所有钱。", year);
} 
