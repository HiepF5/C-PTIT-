#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	double n;
	scanf("%lf",&n);
	printf("%0.15lf\n",1/n);
	}
}
