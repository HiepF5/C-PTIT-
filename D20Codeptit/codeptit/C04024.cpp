#include<stdio.h>
#define swap(a,b){int c;c=a;a=b;b=c;}
long long ts[10005];
long long a[10005];
main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){scanf("%lld",&a[i]);}
	for(int i=n;i>=2;i--)
	for(int j=1;j<=i-1;j++)if(a[j]>a[j+1])swap(a[j],a[j+1]);
	for(int i=n;i>=1;i--)printf("%lld ",a[i]);
}
