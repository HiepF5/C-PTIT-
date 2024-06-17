#include<stdio.h>
#include <stdlib.h>
typedef long long ll;
int cmpfunc (const void * a, const void * b)
{
   return ( *(ll*)b - *(ll*)a );
}
void nhap(ll n, ll *a)
{
	for(int i=0;i<n;i++)scanf("%lld",(a+i));
}
void xuat(ll *a,ll n)
{
	for(int i=0;i<n;i++)printf("%lld",*(a+i));
}
void tinh(ll *a,ll n)
{
	ll min=a[1]-a[0],d=0;
	for(int i=0;i<n-1;i++)if(a[i+1]-a[i]<min)min=a[i+1]-a[i];
	for(int i=0;i<n-1;i++)if(a[i+1]-a[i]==min)d++;
	printf("%lld %lld\n", min,d);
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n=0;
		scanf("%lld",&n);
		ll *a;
		a=(ll *)malloc(n*sizeof(ll));
		nhap(n,a);
		qsort(a, n, sizeof(ll), cmpfunc);
		for(int i=0;i<n;i++)printf("%lld",*(a+i));
}
}
