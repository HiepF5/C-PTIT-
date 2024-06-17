#include<stdio.h>
main()
{
	int t,k;
	scanf("%d",&t);
	for(int k=1;k<=t;k++)
	{
	int n,m;
	int a[50][50];
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	scanf("%d",&a[i][j]);
	printf("Test %d:\n",k);
	for(int i=2;i<=n;i++)
	{
	for(int j=2;j<=m;j++)printf("%d ",a[i][j]);
	printf("\n");}
    }
}
