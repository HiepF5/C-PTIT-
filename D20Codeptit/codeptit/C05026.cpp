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
	int n,x;
	int a[50][50];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
	int max=0;
	for(int i=1;i<=n;i++){
		int s=0;
	for(int j=1;j<=n;j++){if(nt(a[i][j]))s++;else a[i][j]=0;}
	if(s>max){max=s;x=i;}
	}
	printf("%d\n",x);
	for(int j=1;j<=n;j++)if(a[x][j]>0)printf("%d ",a[x][j]);
}
