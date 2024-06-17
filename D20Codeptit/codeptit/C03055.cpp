#include<stdio.h>
#include<string.h>
int kt(char s[])
{
	char *x;
	x=strstr(s,"084");
	int i,n=strlen(s);
	for(i=0;&s[i]!=x;i++)printf("%c",s[i]);
	for(i=i+3;i<n;i++)printf("%c",s[i]);
}
main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[20];
		scanf("%s",&s);
		kt(s);
		printf("\n");
	}
}
