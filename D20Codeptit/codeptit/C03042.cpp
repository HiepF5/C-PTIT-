#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
int c[]={0,0,45,120,210,252,210};
bool sogiam(int n)
{
	int k=n%10;
	n=n/10;
	while(n)
	{
		if(n%10<=k)return 0;
		k=n%10;
		n/=10;
	}
	return 1;
}
int chuso(int n)
{
	int k=0;
	while(n)
	{
		k++;
		n=n/10;
	}
	return k;
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		int d=0;
		scanf("%d%d",&n,&m);
		int a=chuso(n);
		int b=chuso(m);
		if(a!=b)
		{
		for(int j=n;j<=pow(10,a)-1;j++)if(sogiam(j))d++;
		for(int j=pow(10,b-1);j<=m;j++)if(sogiam(j))d++;
		for(int i=a+1;i<=b-1;i++)d+=c[i];
		}
		else For(i,n,m)if(sogiam(i))d++;
		printf("%d\n",d);
		
	}
}


