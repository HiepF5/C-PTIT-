#include<stdio.h>	
main()
{
    long long a,b;
	scanf("%lld%lld",&a,&b);if(b==0){printf("%d ",0);return 0;}
	double x=(double)a/b;
	printf("%lld %lld %lld %.2lf %lld",a+b,a-b,a*b,x,a%b);
}
