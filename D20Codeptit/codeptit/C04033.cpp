#include<stdio.h>
long long ts[10005];
long long a[10005];
main()
{
	int n,max=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	ts[a[i]]++;
	if(a[i]>max)max=a[i];
	}
	int h=0;
	int t=0;
	for(int i=1;i<=n;i++)if(ts[a[i]]>=1){printf("%d ",a[i]);ts[a[i]]=0;h=1;}
	if(h==0)printf("0");
}
