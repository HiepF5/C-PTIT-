#include<stdio.h>
#define swap(a,b){int c;c=a;a=b;b=c;}
long long a[10005];
main()
{
	int n,d=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){scanf("%lld",&a[i]);}
	for(int i=1;i<=n-1;i++)
	{
	printf("Buoc %lld:",i);
	int min=i;
	for(int j=i+1;j<=n;j++)if(a[j]<a[min]){min=j;}
	swap(a[i],a[min]);for(int k=1;k<=n;k++)printf(" %lld ",a[k]);printf("\n");
	}
	}
