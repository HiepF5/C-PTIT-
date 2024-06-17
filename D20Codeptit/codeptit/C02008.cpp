#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	if(i==1||i==n)for(int j=1;j<=i;j++)printf("*");
	else for(int j=1;j<=i;j++)if(j==1||j==i)printf("*");else printf(".");
	printf("\n");
	}
}
