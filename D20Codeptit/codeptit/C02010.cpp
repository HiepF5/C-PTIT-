#include<stdio.h>
main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(n<=m)
	{
	for(int i=1;i<=n;i++)
	{
		int j;
		for(j=i;j<=m;j++)printf("%d",j);
		for(j=i-1;j>=1;j--)printf("%d",j);
		printf("\n");
	}
	}
	else 
	{
	for(int i=1;i<=m;i++)
	{
		int j;
		for(j=i;j<=m;j++)printf("%d",j);
		for(j=i-1;j>=1;j--)printf("%d",j);
		printf("\n");
		}
		for(int i=m+1;i<=n;i++)
		{printf("%d",i);
		for(int i=m-1;i>=1;i--)printf("%d",i);
		printf("\n");}	
	}
	
	}
