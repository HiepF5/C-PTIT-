#include<stdio.h>
long long ts[10005];
long long a[10005];
main()
{
	int t;
	scanf("%d",&t);
	for(int j=1;j<=t;j++)
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
	printf("Test %d:\n",j);
	for(int i=1;i<=n;i++)if(ts[a[i]]!=0){printf("%d xuat hien ",a[i]);printf("%d lan\n",ts[a[i]]);ts[a[i]]=0;h=1;}
}
}
