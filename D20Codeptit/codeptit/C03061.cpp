#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#define swap(a,b) int c;c=a;a=b;b=c;
typedef long long ll;
int tn(char s[],int n)
{
	for(int i=1;i<=(n-1)/2;i++)
	if(s[i]!=s[n-i-1])return 0;
	return 1;
}
main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[20];
		scanf("%s",&s);
		int n=strlen(s);
		//printf("%d %d",(s[0]-48)*2,s[n-1]-48);
		if((s[0]-48)*2==s[n-1]-48||(s[n-1]-48)*2==s[0]-48)if(tn(s,n))printf("YES");else printf("NO");
		else printf("NO");
		printf("\n");
	}
}


