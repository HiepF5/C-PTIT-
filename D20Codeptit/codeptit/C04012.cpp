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
	int h=0;
	for(int i=1;i<=n;i++)if(ts[a[i]]>1){printf("%d ",a[i]);ts[a[i]]=0;h=1;}
	if(h==0)printf("0");
}
