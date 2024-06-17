#include<stdio.h>
#include<math.h>
void xuat(int n,int b[])
{
	for(int i=1;i<=n;i++)printf("%d",b[i]);printf(" ");
	}
void tohop(int n,int i,int b[])
{
	
	for(int j=b[i-1];j<=9;j++)
	{
		b[i]=j;
		if(i==n)xuat(n,b);
		else tohop(n,i+1,b);
	}
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int b[10]={};
		int n;
		scanf("%d",&n);
		b[0]=1;
		tohop(n,1,b);
		printf("\n");
	}
}
