#include<stdio.h>
#include<string.h>
main()
{
	char s[10];
	gets(s);
	printf("%c ",s[0]);
	printf("%c ",s[strlen(s)-1]);
}
