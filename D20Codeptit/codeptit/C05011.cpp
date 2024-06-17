#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#define swap(a,b) {int c; c=a;a=b;b=c;}
typedef long long ll;
int main()
{
	int T;
	scanf("%d",&T);
	For(t,1,T)
	{
		int a[10][10],b[10][10],c[10][10];
		int n,m;
		scanf("%d %d",&n,&m);
		For(i,1,n)For(j,1,m)scanf("%d",&a[i][j]);
		printf("Test %d:\n",t);
		For(i,1,n)For(j,1,m)b[j][i]=a[i][j];
		
		For(i,1,n)
		For(j,1,n)
		{
			c[i][j]=0;
			For(k,1,m)c[i][j]+=a[i][k]*b[k][j];
			
		}
		For(i,1,n){For(j,1,n)printf("%d ",c[i][j]);printf("\n");}
		
		
	}
	return 0;
}

