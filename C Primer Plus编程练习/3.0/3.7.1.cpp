#include<stdio.h>
int main (void)
{
    float salary;
    printf("\aEnter your desired monthly salary:");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f",&salary);
    printf("\n\t$%.2f a month is $%.2fa year.",salary,salary*12.0);
    printf("\rGee��\n");
    getchar();
    getchar();
}     
