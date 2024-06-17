#include<stdio.h>
#define swap(a,b){int c;c=b;b=a;a=c;}
main()
{
	int n;
	int a[50][50];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
	for(int i=1;i<=n;i++)swap(a[i][i],a[i][n-i+1])
	for(int j=1;j<=n;j++)
	{
	for(int i=1;i<=n;i++)printf("%d ",a[j][i]);
	printf("\n");}
}
