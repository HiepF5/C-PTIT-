#include<stdio.h>
main()
{
	int n;
	int x,s=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){scanf("%d",&x);s+=x;}
	printf("%.3lf",(double)s/n);
	
}
