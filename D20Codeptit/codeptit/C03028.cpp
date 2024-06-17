#include<stdio.h>
#include<math.h>
#define For(i,n,m) for(int i=n;i<=m;i++)
main()
{
	int t;
	scanf("%d",&t);
	int a[20][20];
	a[1][1]=1;
	a[2][1]=a[2][2]=1;
	For(i,3,t)
	For(j,1,i)
	{
	if(j==1||j==i){a[i][j]=1;continue;}
	a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	For(i,1,t)
	{
	For(j,1,i)printf("%d ",a[i][j]);printf("\n");}
	
}
