#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#define swap(a,b) {int c; c=a;a=b;b=c;}
typedef long long ll;
int loaihang(int a[][10],int n,int m)
{
	int tt=0,d=0;
	For(i,1,n)
	{
		int t=0;
		For(j,1,m)t+=a[i][j];
		if(t>tt){tt=t;d=i;}
	}
	For(i,1,m)a[d][i]=0;
	return d;
}
int loaicot(int a[][10],int n,int m)
{
	int tt=0,d=0;
	For(i,1,m)
	{
		int t=0;
		For(j,1,n)t+=a[j][i];
		if(t>tt){tt=t;d=i;}
	}
	For(i,1,n)a[i][d]=0;
	return d;
}
int main()
{
	int T;
	scanf("%d",&T);
	for(int t=1;t<=T;t++)
	{
		int a[10][10];
		int m,n;
		scanf("%d%d",&n,&m);
		For(i,1,n)For(j,1,m)scanf("%d",&a[i][j]);
		int dh=loaihang(a,n,m);
		int dc=loaicot(a,n,m);
		printf("Test %d:\n",t);
		For(i,1,n)
		{
			For(j,1,m)
			{
			if(i==dh||j==dc)continue;
			else printf("%d ",a[i][j]);}
			printf("\n");
		}
	}
	return 0;
}

