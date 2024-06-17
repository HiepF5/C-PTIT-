#include<stdio.h>
#include<string.h>
main()
{
	long long t;
	scanf("%lld",&t);
	double s=0;
	double i=0;
	while(t--)
	{
		i++;
	s=s+1/i;
}
	printf("%.4lf",s);
}
