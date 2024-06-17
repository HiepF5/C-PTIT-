#include<stdio.h>
long long n,m;
long long ucln()
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
	scanf("%lld%lld",&n,&m);
	long long s=n*m;
	printf("%lld\n",ucln());
	printf("%lld",s/ucln());
}
