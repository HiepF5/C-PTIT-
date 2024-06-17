#include<stdio.h>
#define swap(a,b){int c;c=a;a=b;b=c;}
long long a[10005];
long long b[10005];
main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){scanf("%lld",&a[i]);}
	for(int i=1;i<=n;i++)
	{
	printf("Buoc %d:",i-1);
	b[i]=a[i];
	for(int j=i;j>=2;j--)if(b[j]>b[j-1])swap(b[j],b[j-1]);
	for(int k=i;k>=1;k--)printf(" %lld ",b[k]);
	printf("\n");
	}
}
