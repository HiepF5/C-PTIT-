#include<stdio.h>
long long a[10005];
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){int k;scanf("%d",&k);if(k%2==0)printf("%d ",k);}
		printf("\n");
	}
}
