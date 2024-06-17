#include<stdio.h>
#include<math.h>
#define swap(a,b){int c;c=b;b=a;a=c;}
int nt(int n)
{
	if(n==2||n==3)return 1;
	if(n<=1||n==4)return 0;
	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	return 1;
}
main()
{
	int n,s=0;
	int a[50][50];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
	for(int i=1;i<=n;i++)for(int j=i;j<=n;j++)if(nt(a[i][j]))s=s+a[i][j];
	//for(int j=1;j<=n;j++)
	//{
	//for(int i=1;i<=n;i++)printf("%d ",a[j][i]);
	printf("%d",s);
}
