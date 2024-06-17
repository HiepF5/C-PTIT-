#include<string.h>
#include<stdio.h>
main()
{
	char x[10];
	gets(x);
	if((x[0]-48)+(x[4]-48)==(x[8]-48))printf("YES");
	else printf("NO");
}
