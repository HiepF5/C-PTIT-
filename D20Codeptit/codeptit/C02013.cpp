#include<stdio.h>
main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(n==m)
	{
	for(int i=n;i>=1;i--)
	{
		int j;
		for(j=i;j>=2;j--)printf("%d",j);
		for(j=1;j<=m-i+1;j++)printf("%d",j);
		printf("\n");
	}
	}
	else if(n>m)
	{
		for(int i=n;i>=m+1;i--)
		{
		for(int j=i;j>=i-m+1;j--)printf("%d",j);
		printf("\n");
		}
	for(int i=m;i>=1;i--)
	{
		int j;
		for(j=i;j>=2;j--)printf("%d",j);
		for(j=1;j<=m-i+1;j++)printf("%d",j);
		printf("\n");
	}
		
	}
	else 
	{
		
	for(int i=m;i>=m-n+1;i--)
	{
		int j;
		for(j=i;j>=2;j--)printf("%d",j);
		for(j=1;j<=m-i+1;j++)printf("%d",j);
		printf("\n");
	}
		
	}
}
