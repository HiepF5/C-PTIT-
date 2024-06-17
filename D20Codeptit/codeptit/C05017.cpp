#include<stdio.h>
int a[101][101];
int b[101][101];
int main()
{

   int T;
   scanf("%d",&T);
	  while(T--)
	  {
	     int n,m;
	     scanf("%d%d",&n,&m);
	     for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)scanf("%d",&b[i][j]);
	     int i,d=1,gt=1,h=n,c=m;
		while(1)
		{
		for(i=d;i<=c;i++){printf("%d ",b[d][i]);gt++;}
		if(gt>m*n)break;
		for(i=d+1;i<=h;i++){printf("%d ",b[i][c]);gt++;}
		if(gt>m*n)break;
		for(i=c-1;i>=d;i--){printf("%d ",b[h][i]);gt++;}
		if(gt>m*n)break;
		for(i=h-1;i>d;i--){printf("%d ",b[i][d]);gt++;}
		if(gt>m*n)break;
		d++;h--;c--;
		}
			printf("\n");
		  }
}
