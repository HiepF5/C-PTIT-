#include<stdio.h>
long long ts[10005];
long long a[10005];
main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)ts[i]=0;
	for(int i=1;i<=n;i++)
	{
	scanf("%lld",&a[i]);
	ts[a[i]]++;
	}
	int h=0;
	for(int i=1;i<=n;i++)if(ts[a[i]]!=0){printf("%d ",a[i]);printf("%d\n",ts[a[i]]);ts[a[i]]=0;h=1;}
}
