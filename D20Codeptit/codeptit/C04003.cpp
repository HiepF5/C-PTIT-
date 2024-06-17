#include<stdio.h>
#include<math.h>
long long a[1000005];
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,h=0;
		scanf("%lld",&n);
		for(long long i=1;i<=n;i++)scanf("%lld",&a[i]);
		for(long long i=1;i<=n/2;i++)if(a[i]!=a[n-i+1]){printf("NO\n");h=1;break;}
		if(h==0)printf("YES\n");
	}
}
