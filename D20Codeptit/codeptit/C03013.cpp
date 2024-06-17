#include<stdio.h>
long long a[100];
void f()
{
	a[0]=0;
	a[1]=1;
	a[2]=1;
	for(int i=3;i<=40;i++)a[i]=a[i-1]+a[i-2];	
//	for(int i=1;i<=40;i++)printf("%lld ",a[i]);
}
main()
{
	f();
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++)
	{
	printf("%lld ",a[i]);
	}
	
}
