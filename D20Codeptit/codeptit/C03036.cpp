#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define max 1000005
#include<string.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
int kt(char s[])
{
	int n=strlen(s);
	int tong=0;
	for(int i=0;i<n;i++)
	{
		if((s[i]-48)%2==0&&(s[n-i-1]-48)%2==0){return 0;}
		if(s[i]-48!=s[n-i-1]-48){return 0;}
	}
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
		if(strlen(s)%2==0)printf("NO");
		else
		{
		if(kt(s))printf("YES");
		else printf("NO");
		}
		printf("\n");
	}
}


