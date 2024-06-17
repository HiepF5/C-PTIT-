#include<stdio.h>
#include<string.h>
long long giaithua(int n)
{
	if(n==0)return 1;
	else return n*giaithua(n-1);
}
main()
{
	long long a[21];
	for(int i=1;i<=20;i++)a[i]=giaithua(i);
	int t;
	scanf("%d",&t);
	long long s=0;
	for(int i=1;i<=t;i++)s=s+a[i];
	printf("%lld",s);
}
