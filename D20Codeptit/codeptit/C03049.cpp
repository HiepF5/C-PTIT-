#include<stdio.h>
#include<string.h>
void ktl(char a[],int n)
{
	int tc=0,tl=0;
	for(int i=0;i<n;i++)
	{
	if((a[i]-48)&1)tl++;else tc++;
	}
	if(tc<tl)printf("YES\n");
	else printf("NO\n");
}
main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char a[1000];
		scanf("%s",a);
		int n=strlen(a);
		if(a[n-1]&1)ktl(a,n);
		else printf("NO\n");
	}
}
