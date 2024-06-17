#include<stdio.h>
long long a[100];
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,d=0,max=0;
		scanf("%d",&n);
		a[0]=0;
		for(int i=1;i<=n;i++)scanf("%d",&a[i]);
		for(int i=1;i<=n;i++)if(a[i]>=max){d++;max=a[i];}
		printf("%d",d);
		printf("\n");
	}
}

