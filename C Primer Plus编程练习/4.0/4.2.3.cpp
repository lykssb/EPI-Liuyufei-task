#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraordinary being" 
int main (void)
{
	char name[40];
	printf("what's your name?");
	scanf("%s",name);
	printf("%s,%s\n",name,PRAISE);
	printf("your name of %u letters occupies %u memory cells.\n",strlen(name),sizeof name);
	printf("the phrase of praise has %u letter",strlen(PRAISE));
	printf("and occupies %u memory cells.\n",sizeof PRAISE);
}
