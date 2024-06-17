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
		for(j=i;j<=m;j++)printf("%c",j+64);
		for(j=i-1;j>=1;j--)printf("%c",j+64);
		printf("\n");
	}
	}
	else 
	{
	for(int i=1;i<=m;i++)
	{
		int j;
		for(j=i;j<=m;j++)printf("%c",j+64);
		for(j=i-1;j>=1;j--)printf("%c",j+64);
		printf("\n");
	}
		for(int i=1;i<=n-m;i++)
		{
		for(int j=m;j>=1;j--)printf("%c",j+64);
		printf("\n");
		}
	}
}
