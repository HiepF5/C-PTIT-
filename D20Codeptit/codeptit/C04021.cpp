#include<stdio.h>
long long a[10005];
main()
{
	int n,k;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){scanf("%d",&a[i]);}scanf("%d",&k);
	for(int i=n-k+1;i<=n;i++)printf("%d ",a[i]);
	for(int i=1;i<=n-k;i++)printf("%d ",a[i]);
}
