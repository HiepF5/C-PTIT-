#include<stdio.h>
#define swap(a,b){int c;c=b;b=a;a=c;}
main()
{
	int n,m,h,k;
	int a[50][50];
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	scanf("%d",&a[i][j]);
	scanf("%d%d",&k,&h);
	for(int i=1;i<=n;i++)swap(a[i][k],a[i][h])
	for(int j=1;j<=n;j++)
	{
	for(int i=1;i<=m;i++)printf("%d ",a[j][i]);
	printf("\n");}
}
