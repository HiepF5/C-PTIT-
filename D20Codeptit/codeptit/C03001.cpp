#include<stdio.h>
#include<string.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[10];
		int d=0;
		scanf("%s",s);
		for(int i=0;i<strlen(s);i++)d+=s[i]-48;
		if(d%10==0)printf("YES\n");
		else printf("NO\n");
		}	
}
