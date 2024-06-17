#include<stdio.h>
#include<string.h>
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
		for(int i=0;i<=n/2;i++)if((c[i]-48)%2!=0||(c[i]-48)!=(c[n-i]-48)){h=1;printf("NO\n");break;}
		if(h==0)printf("YES\n");
		}
		
	}
