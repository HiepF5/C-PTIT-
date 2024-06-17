#include<stdio.h>
#include<math.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#include<stdbool.h>
typedef long long ll;
int UCLN(int a,int b)
{
	if(a%b==0)return b;
	return UCLN(b,a%b);
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		//printf("%d",UCLN(a,b));
		if(UCLN(a,b)==UCLN(c,d))printf("YES\n");
		else printf("NO\n");
	}
}

