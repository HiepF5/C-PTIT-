#include<stdio.h>
#include<math.h>
#define For(i,n,m) for(int i=n;i<=m;i++)
int a[15];
int d=1;
int ktnt(int n)
{
	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	return 1;
}
int ktt(int a[],int n)
{
	For(i,1,n-1)if(a[i]>=a[i+1])return 0;
	return 1;
}
int ktg(int a[],int n)
{
	For(i,1,n-1)if(a[i]<=a[i+1])return 0;
	return 1;
}
void tachso(int n)
{
	int m=n;
	int i=0;
	int s=0;
	while(n>0)
	{
		a[++i]=n%10;
		n=n/10;
	}
	if(ktt(a,i)||ktg(a,i))if(ktnt(m)){a[d]++;}
}
main()
{
	for(int i=1;i<=pow(10,9);i++)tachso(i);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		d=0;
		int n;
		scanf("%d",&n);
		printf("%d\n",a[n]);
	}
}
