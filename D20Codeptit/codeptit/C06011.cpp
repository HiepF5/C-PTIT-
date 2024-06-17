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
		if(c[0]!='8'||c[n]!='8')printf("NO\n");
		else 
			{
			int h=0,s=16;
			for(int i=1;i<=n/2;i++){s=s+c[i]+c[n-i]-48-48;if((c[i]-48)!=(c[n-i]-48)){h=1;printf("NO\n");break;}}
		//	printf("%d",s[])
			if(h==0)
			{
				if(s%10==0)printf("YES\n");
				else printf("NO\n");
			}
			}
	}
}
