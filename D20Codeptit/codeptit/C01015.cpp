#include<stdio.h>
#include<math.h>
main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a==0)
	{
		if(b==0)printf("NO");
		else 
		{
			if(c==0)printf("0.00");
			else printf("%.2lf",-c/a);
		}
	}
	else if(b==0&&c==0)printf("0.00"); 
	else {
	double d=(b*b)-4*a*c;
	if(d>0){printf("%.2lf %.2lf",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));return 0;}
	if(d==0){printf("%.2lf",-b/(2*a));return 0;}
	if(d<0){printf("NO");return 0;}
	}
}
