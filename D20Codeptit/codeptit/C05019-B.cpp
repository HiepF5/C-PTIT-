#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#define mxn 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#define For2(i,a,b) for(int i=a;i<b;i++)
#define swap(a,b) {int c; c=a;a=b;b=c;}
typedef long long ll;
bool pr[mxn];
int f[mxn];
void sang()
{
	pr[0]=pr[1]=1;
	for(int i=2;i*i<mxn;i++)
	if(!pr[i])
	for(int j=i*i;j<mxn;j+=i)pr[j]=1;
}
void matran(int n)
{
	int m[20][20]={};
	int t=1;
	int d=0,c=n-1;
//	printf("%d %d",d,t);
	while(t<=n*n)
	{
		for(int i=d;i<=c;i++)m[d][i]=f[t++];
		for(int i=d+1;i<=c;i++)m[i][c]=f[t++];
		for(int i=c-1;i>=d;i--)m[c][i]=f[t++];
		for(int i=c-1;i>d;i--)m[i][d]=f[t++];
		d++;c--;
	}
	For2(i,0,n){For2(j,0,n)printf("%d ",m[i][j]);printf("\n");}
	
}
int main()
{
	sang();
	int d=1;
	for(int i=2;i<=mxn;i++)if(!pr[i])f[d++]=i;
	int T;
	scanf("%d",&T);
	For(t,1,T)
	{
	int n;
	scanf("%d",&n);
	printf("Test %d:\n",t);
	matran(n);
	}
	return 0;
}

