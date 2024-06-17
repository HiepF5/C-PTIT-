#include<stdio.h>
long long ts[10005];
long long a[10005];
main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){scanf("%lld",&a[i]);}
	for(int i=1;i<=n;i++)if(a[i]%2==0)printf("%lld ",a[i]);
	printf("\n");
	for(int i=1;i<=n;i++)if(a[i]%2!=0)printf("%lld ",a[i]);
}
