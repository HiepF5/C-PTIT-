#include<stdio.h>
long long ts[10005];
long long a[10005];
main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	ts[a[i]]++;
	}
	int t=0;
	for(int i=1;i<=n;i++)if(ts[a[i]]==1)t++;printf("%d \n",t);
	for(int i=1;i<=n;i++)if(ts[a[i]]==1){printf("%d ",a[i]);}
}
