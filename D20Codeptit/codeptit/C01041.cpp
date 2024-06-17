#include<stdio.h>
#include<math.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		double x1,x2,x3,y1,y2,y3;
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
		double a,b,c;
		a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
		c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
		if(a+b<=c||a+c<=b||b+c<=a||a==0||b==0||c==0)printf("INVALID\n");
		else {
		double	p=(a+b+c)/2;
		printf("%.3lf\n",sqrt(p*(p-a)*(p-b)*(p-c)));
		}
	}
}
