#include<stdio.h>
long long a[100];
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,d=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)scanf("%d",&a[i]);
		for(int i=1;i<=n-1;i++)if(a[i]==a[i+1])d++;
		printf("%d",d);
		printf("\n");
	}
}

