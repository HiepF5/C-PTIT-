#include<math.h>
#include<stdio.h>
long long a[100];
long long b[100];
main()
{
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++)
	{
		int n,m,p;
		scanf("%d%d%d",&n,&m,&p);
		for(int i=1;i<=n;i++)scanf("%d",&a[i]);
		for(int i=1;i<=m;i++)scanf("%d",&b[i]);
		printf("Test %d:\n",k);
		for(int i=1;i<=p;i++)printf("%d ",a[i]);
		for(int j=1;j<=m;j++)printf("%d ",b[j]);
		for(int i=p+1;i<=n;i++)printf("%d ",a[i]);
		printf("\n");
	}
}

