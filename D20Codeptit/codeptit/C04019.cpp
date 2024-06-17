#include<stdio.h>
int a[1005];
int tanso[300005];
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int max=1;
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){scanf("%d",&a[i]);tanso[a[i]]++;if(tanso[a[i]]>=max)max=tanso[a[i]];}
		for(int i=1;i<=n;i++){if(tanso[a[i]]==max)printf("%d ",a[i]);tanso[a[i]]=0;}
		printf("\n");
		
	}
}
