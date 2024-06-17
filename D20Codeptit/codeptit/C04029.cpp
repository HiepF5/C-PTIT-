#include<stdio.h>
#define swap(a,b){int c;c=a;a=b;b=c;}
long long ts[10005];
long long a[10005];
main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){scanf("%lld",&a[i]);}
	for(int i=1;i<=n-1;i++)
	{
	int h=0;
	for(int j=1;j<=n-1;j++)if(a[j]>a[j+1]){swap(a[j],a[j+1]);h=1;}
	if(h==1)
	{
	printf("Buoc %d:",i);
	for(int k=1;k<=n;k++)printf(" %lld ",a[k]);
	}
	printf("\n");
	}
}
