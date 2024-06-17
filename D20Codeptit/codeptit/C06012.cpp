#include<stdio.h>
#include<string.h>
int kt(int n)
{
	if(n==2||n==3||n==5||n==7)return 1;
	else return 0;
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char c[1000];
		scanf("%s",c);
		int n=strlen(c)-1;
		int h=0;
		for(int i=0;i<=n/2;i++)if(kt(c[i]-48)==0||(c[i]-48)!=(c[n-i]-48)){h=1;printf("NO\n");break;}
		if(h==0)printf("YES\n");
		}
		
	}
