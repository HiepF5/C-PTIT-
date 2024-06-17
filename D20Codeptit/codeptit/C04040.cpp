#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,s=0,smax=0;
		scanf("%lld",&n);
		for(int i=1;i<=n;i++)
		{
			long long k;
			scanf("%lld",&k);
			if(k+s<0){s=0;continue;}
			else 
			{
				s+=k;
				if(s>smax)smax=s;
			}
		}
		printf("%lld\n",smax);
	}
}
