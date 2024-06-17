#include<stdio.h>
#include<string.h>
int kt(char a[],int n)
{
	int cnt[1000]={};
	for(int i=0;i<=n;i++)
	{
		if((a[i]-48)>=0&&(a[i]-48)<=9)cnt[a[i]-48]++;
		else {printf("INVALID\n");return 0;}
		}
	for(int i=0;i<=9;i++)if(cnt[i]==0){printf("NO\n");return 0;}
 	printf("YES\n");return 1;
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[1000];
		scanf("%s",a);
		int n=strlen(a)-1;
		if(a[0]=='0')printf("INVALID\n");
		else kt(a,n);
	}
}
