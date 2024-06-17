#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#define For2(i,a,b) for(int i=a;i<b;i++)
#define swap(a,b) {int c; c=a;a=b;b=c;}
typedef long long ll;
void matran(int n)
{
	int m[20][20]={};
	int t=n*n;
	int d=0,c=n-1;
//	printf("%d %d",d,t);
	while(t>=1)
	{
		for(int i=d;i<=c;i++)m[d][i]=t--;
		for(int i=d+1;i<=c;i++)m[i][c]=t--;
		for(int i=c-1;i>=d;i--)m[c][i]=t--;
		for(int i=c-1;i>d;i--)m[i][d]=t--;
		d++;c--;
	}
	For2(i,0,n){For2(j,0,n)printf("%d ",m[i][j]);printf("\n");}
	
}
int main()
{
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

