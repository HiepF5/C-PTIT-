#include<stdio.h>
main()
{
	int n,m;
	int a[50][50];
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	scanf("%d",&a[i][j]);
	for(int j=1;j<=m;j++)
	{
	for(int i=1;i<=n;i++)printf("%d ",a[i][j]);
	printf("\n");}
}
