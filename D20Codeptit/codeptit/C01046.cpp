#include<stdio.h>
#include<math.h>
main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	double a,b,c,d;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	double AB=0.0;
	AB= (double)sqrt((c-a)*(c-a)+(d-b)*(d-b));
	//double k;
	//k=(double)sqrt(AB);
	printf("%.4lf\n",AB);
}
}
