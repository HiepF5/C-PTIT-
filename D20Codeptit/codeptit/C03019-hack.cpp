#include<stdio.h>
#include<math.h>
#define For(i,n,m) for(int i=n;i<=m;i++)
int a[15]={0,0,1,9,18,90,180,900,1800,9000};
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%d\n",a[n]);
	}
}
