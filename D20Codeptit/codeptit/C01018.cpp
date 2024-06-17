#include<stdio.h>
#include<math.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	long long int n;
	scanf("%lld",&n);
	long long s=sqrt(n);
	if(n==s*s)printf("YES\n");
	else printf("NO\n");
}
}
