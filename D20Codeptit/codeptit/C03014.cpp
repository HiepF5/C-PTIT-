#include<stdio.h>
long long ucln(long long n, long long m)
{
	long long r;
	while(n%m!=0)
	{
		r=n%m;
		n=m;m=r;
	}
	return m;
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	long long n,m;
	scanf("%lld%lld",&n,&m);
	long long s=n*m;
	printf("%lld %lld\n",s/ucln(n,m),ucln(n,m));
}
}
