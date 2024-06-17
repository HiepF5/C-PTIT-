#include<stdio.h>
main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(n<=m)
	{
	for(int i=n;i>=1;i--)
	{
		for(int j=i;j<=m;j++)printf("%c",j+64);
		int k=i-1;
		while(k--)
		{
			printf("%c",m+64);
		}
		printf("\n");	
	}
	}
	else 
	{
		for(int i=1;i<=n-m;i++)
		{
		for(int j=m;j>=1;j--)printf("%c",m+64);
		printf("\n");
		}
	for(int i=m;i>=1;i--)
	{
		int k=i-1;
		for(int j=i;j<=m;j++)printf("%c",j+64);
		while(k--)
		{
			printf("%c",m+64);
		}
		printf("\n");	
	}
		
	}
}
