#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
	for(int j=1;j<=i-1;j++)printf("~");
	if(i==n||i==1)for(int j=1;j<=n;j++)printf("*");
	else for(int j=1;j<=n;j++)if(j==1||j==n)printf("*");else printf(".");
	printf("\n");
	}
}
