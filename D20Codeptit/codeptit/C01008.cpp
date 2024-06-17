#include<stdio.h>
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(b<=0||a<=0){printf("%d ",0);return 0;}
	printf("%d ",(a+b)*2);
	printf("%d",a*b);
}
