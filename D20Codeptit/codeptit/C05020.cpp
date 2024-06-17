#include<stdio.h>
int a[101][101];
long long b[100];
void fi()
{
    b[0]=0;
    b[1]=1;
    b[2]=1;
    for(int i=3;i<=92;i++)
    b[i]=b[i-1]+b[i-2];
}
int main()
{
    fi();
	int n;
	scanf("%d",&n);
	int i,d=0,gt=0,h=n-1,c=n-1;
	while(d<=n/2)
	{
	for(i=d;i<=c;i++)a[d][i]=b[gt++];
	for(i=d+1;i<=h;i++)a[i][c]=b[gt++];
	for(i=c-1;i>=d;i--)a[h][i]=b[gt++];
	for(i=h-1;i>d;i--)a[i][d]=b[gt++];
	d++;h--;c--;
	}
	for(int i=0;i<=n-1;i++)
	{for(int j=0;j<=n-1;j++)
	printf("%lld ",a[i][j]);	printf("\n");
	}
}
