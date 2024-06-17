#include<stdio.h>
#include<math.h>
int t=0;
int kttn(int a[],int m,int n)
{
	//for(int i=1;i<=n;i++)printf("%d ",a[i]);
	//printf("\n");
	for(int i=1;i<=n/2;i++)if(a[i]!=a[n-i+1])return 0;
	printf("%d ",m);
	t++;
}
int tachso(int n)
{
	int a[10000];
	int m=n;
	int s=0;
	int i=0;
	while(n>0)
	{
		i++;
		a[i]=n%10;
		n/=10;
	}
	for(int j=1;j<=i;j++)if(a[j]==9)return 0;
	kttn(a,m,i);
}
main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		tachso(i);
	}
	printf("\n%d",t);
}
