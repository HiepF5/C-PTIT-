#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
bool sogiam(int n)
{
	int k=n%10;
	n=n/10;
	while(n)
	{
		if(n%10<=k)return 0;
		k=n%10;
		n/=10;
	}
	return 1;
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		int d=0;
		scanf("%d%d",&n,&m);
		For(i,n,m)if(sogiam(i))d++;
		printf("%d\n",d);
	}
}
