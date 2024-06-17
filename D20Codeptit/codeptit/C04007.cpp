#include<stdio.h>
long long b[10005];
long long a[10005];
main()
{
	int n,m,k;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){scanf("%d",&a[i]);}
	for(int i=1;i<=m;i++){scanf("%d",&b[i]);}
	scanf("%d",&k);
	int i;
	for( i=1;i<=k;i++)printf("%d ",a[i]);
	for(int j=1;j<=m;j++){printf("%d ",b[j]);}
	for( ;i<=n;i++)printf("%d ",a[i]);
}
