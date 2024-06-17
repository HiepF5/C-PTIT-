#include<stdio.h>
long long a[101][101];
main()
{
	int n;
	scanf("%d",&n);
	int i,d=0,gt=1,h=n-1,c=n-1;
	while(d<=n/2)
	{
	for(i=d;i<=c;i++)a[d][i]=gt++;
	for(i=d+1;i<=h;i++)a[i][c]=gt++;
	for(i=c-1;i>=d;i--)a[h][i]=gt++;
	for(i=h-1;i>d;i--)a[i][d]=gt++;
	d++;h--;c--;
	}
	for(int i=0;i<=n-1;i++)
	{for(int j=0;j<=n-1;j++)
	printf("%d ",a[i][j]);	printf("\n");
	}
}
