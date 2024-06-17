#include<stdio.h>
main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=i-1;j++)printf("~");
	if(i==n||i==1)for(int j=1;j<=m;j++)printf("*");
	else for(int j=1;j<=m;j++)if(j==1||j==m)printf("*");else printf(".");
	printf("\n");
	}
}
