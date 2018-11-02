#include<stdio.h>
#define squares 64
int main (void)
{
    int n = 0;
    size_t intsize;
    
    intsize = sizeof(int);
    printf("n = %d, n has %u bytes; all ints have %u bytes.\n", n, sizeof n, intsize);
}
