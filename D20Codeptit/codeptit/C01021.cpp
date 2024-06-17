#include<stdio.h>
#include<string.h>
main()
{
	char a[10];
	gets(a);
	int s=0;
	for(int i=0;i<strlen(a);i++)s+=(a[i]-48);
	printf("%d",s);
}
