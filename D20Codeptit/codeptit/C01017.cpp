#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	long long int n;
	scanf("%lld",&n);
	printf("%lld \n",n*(n+1)/2);}
}
