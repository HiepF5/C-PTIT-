#include<stdio.h>
#include<math.h>
long long a[100];
void f()
{
	a[1]=1;
	a[2]=1;
	for(int i=3;i<=92;i++)a[i]=a[i-1]+a[i-2];
}
main()
{
	f();
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		printf("%lld\n",a[n]);
	}
}
