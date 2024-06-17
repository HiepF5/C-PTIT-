#include<stdio.h>
#include<math.h>
long long a[10005];
int nt(int n)
{
	if(n==2||n==3)return 1;
	if(n<=1||n==4)return 0;
	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	return 1;
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{int k;scanf("%d",&k);if(nt(k))printf("%d ",k);}
		printf("\n");
	}
}
