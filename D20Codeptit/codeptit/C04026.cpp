#include<stdio.h>
#define swap(a,b){int c;c=a;a=b;b=c;}
long long a[10005];
long long b[10005];
main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){scanf("%lld",&a[i]);}
	for(int i=1;i<=n-1;i++)
	{
		//int h=0;
	printf("Buoc %d:",i);
	for(int j=i+1;j<=n;j++)if(a[i]>a[j]){swap(a[i],a[j]);}
	for(int k=1;k<=n;k++)printf(" %lld ",a[k]);
	printf("\n");
	}
}
