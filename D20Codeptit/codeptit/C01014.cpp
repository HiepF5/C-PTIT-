#include<stdio.h>
#include<string.h>
main()
{
	double a,b;
	scanf("%lf%lf",&a,&b);
	if(a==b&&b==0){printf("Vo so nghiem");return 0;}
	if(a==0&&b!=0){printf("Vo nghiem");return 0;}
	printf("%.2lf",-b/a);
}
