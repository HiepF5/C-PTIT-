#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int s=0;
	for(int i=1;i<=n/2+1;i++)if(n%i==0)s=s+i;
	if(s==n)printf("%d",1);
	else printf("%d",0);
}
