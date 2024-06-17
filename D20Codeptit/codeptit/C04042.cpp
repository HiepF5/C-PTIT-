#include<stdio.h>
long long tanso[100005];
long long a[100005];
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,h=0,max=0;
		scanf("%lld",&n);
		for(long long i=1;i<=n;i++)
		{
		scanf("%lld",&a[i]);
		tanso[a[i]]++;
		}
		for(long long i=1;i<=n;i++)if(tanso[a[i]]>=2){printf("%lld\n",a[i]);h=1;break;}
		if(h==0)printf("NO\n");
		for(long long i=1;i<=1e5;i++)tanso[i]=0;
	}
}
