#include<stdio.h>
#define swap(a,b){int c;c=a;a=b;b=c;}
long long a[100][100];
void sort(int n,int m)
{
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	{
		for(int k=i;k<=n;k++)
		for(int c=j;c<=m;c++)
		if(a[i][j]>a[k][c])swap(a[i][j],a[k][c]);
	}
}
main()
{
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++)
	{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<=n;i++)a[0][i]=0;
	for(int i=0;i<=m;i++)a[i][0]=0;
	for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)scanf("%lld",&a[i][j]);
	printf("Test %d:\n",k);
	sort(n,m);
	for(int i=0;i<=n;i++)
	{
	for(int j=0;j<=m;j++)printf("%lld ",a[i][j]);printf("\n");
	}
	printf("\n");
	}
}
