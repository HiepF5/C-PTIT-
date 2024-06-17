#include<stdio.h>
#include<string.h>
int kiemtra(char s[])
{
	for(int i=strlen(s)-1;i>=0;i--)if(s[i]-48&1)return 0;
	return 1;
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[20];
		scanf("%s",&s);
		if(kiemtra(s))printf("YES\n");
		else printf("NO\n");
	}
}
