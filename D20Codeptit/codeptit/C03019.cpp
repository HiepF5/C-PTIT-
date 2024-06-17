#include<stdio.h>
#include<math.h>
#define For(i,n,m) for(int i=n;i<=m;i++)
int a[15];
int d=0;
int kttn(int a[],int n)
{
	for(int i=1;i<=n/2;i++)if(a[i]!=a[n-i+1])return 0;
	return 1;
}
void tachso(int n)
{
	int m=n;
	int i=0;
	int s=0;
	while(n>0)
	{
		s=s+n%10;
		a[++i]=n%10;
		n=n/10;
	}
	if((s%10==0)&&kttn(a,i)){/*printf("%d ",m)*/;d++;}
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		d=0;
		int n;
		scanf("%d",&n);
		long long c=pow(10,n-1),b=pow(10,n)-1;
		//printf("%lld",a);
		For(i,c,b)tachso(i);
		printf("\n%d\n",d);
	}
}
