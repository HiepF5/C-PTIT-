#include<stdio.h>
#include<math.h>
int b[10];
void xuat(int n,int b[])
{
	for(int i=1;i<=n;i++)printf("%d",b[i]);printf(" ");
	}
void tohop(int n,int i)
{
	for(int j=b[i-1]+1;j<=9;j++)
	{
		b[i]=j;
		if(i==n)xuat(n,b);
		else tohop(n,i+1);
	}
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		tohop(n,1);
	}
}
