#include<stdio.h>
main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(n<=m)
	{
	for(int i=1;i<=n;i++)
	{
		int k=i-1;
		for(int j=i;j<=m;j++)printf("%c",j+63);
		while(k--)
		{
			printf("%c",m+63);
		}
		printf("\n");	
	}
	}
	else 
	{
	for(int i=1;i<=m;i++)
	{
		int k=i-1;
		for(int j=i;j<=m;j++)printf("%c",j+63);
		while(k--)
		{
			printf("%c",m+63);
		}
		printf("\n");	
	}
		for(int i=1;i<=n-m;i++)
		{
		for(int j=m;j>=1;j--)printf("%c",m+63);
		printf("\n");
		}
	}
}
