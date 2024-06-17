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
		for(j=m;j>=i;j--)printf("%c",j+96);
		for(j=i-1;j>=1;j--)printf("%c",i+96);
		printf("\n");
	}
	}
	else if(n>m)
	{
		for(int i=n;i>=n-m+1;i--)
		{
		int j;
		for(j=n;j>=i;j--)printf("%c",j+96);
		for(j=i-1;j>=n-m+1;j--)printf("%c",i+96);
		printf("\n");
		}
		for(int i=n-m;i>=1;i--)
		{
		int j;
		for(j=n;j>=n-m+1;j--)printf("%c",j+96);
		printf("\n");
		}
		
	}
	else 
	{
	for(int i=m;i>=m-n+1;i--)
		{
		int j;
		for(j=m;j>=i;j--)printf("%c",j+96);
		for(j=i-1;j>=1;j--)printf("%c",i+96);
		printf("\n");
	}
		
	}
}
