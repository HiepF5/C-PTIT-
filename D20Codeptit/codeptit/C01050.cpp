#include<stdio.h>
main()
{
	int m,n;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++)
	{
	if(i==1||i==m){for(int j=1;j<=n;j++)printf("*");}
	else {
		for(int j=1;j<=n;j++)if(j==1||j==n)printf("*");else printf(" ");
	}
	printf("\n");
}
}
