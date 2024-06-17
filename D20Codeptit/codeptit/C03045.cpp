#include<stdio.h>
#include<math.h>
void  ptnt(long long n)
{
	long long d=0;
	for(long long i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)while(n%i==0){d=i;n=n/i;}
	}
	if(n>1)
	{
		if(n>d)printf("%lld\n",n);
		else printf("%lld\n",d);
	}
	
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		ptnt(n);
	}
}
