#include<stdio.h>	
main()
{
    long long a,b;
	scanf("%lld%lld",&a,&b);if(b==0){printf("%d ",0);return 0;}
	double x=(double)a/b;
	printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2lf\n",a+b,a-b,a*b,a/b,a%b,x);
}
