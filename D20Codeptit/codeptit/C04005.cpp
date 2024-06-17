#include<stdio.h>
#include<math.h>
long long a[100];
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,max=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>max){max=a[i];}
		}
		printf("%d\n",max);
		for(int i=1;i<=n;i++)if(a[i]==max)printf("%d ",i-1);
		printf("\n");
		
	}
}
