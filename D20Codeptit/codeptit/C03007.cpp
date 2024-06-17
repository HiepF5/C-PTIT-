#include<stdio.h>
#include<math.h>
#define For(i,n,m) for(int i=n;i<=m;i++)
//const int max=1e6;
int d=0;
int a[100006];
int ktnt(int n)
{
	if(n==2||n==3)return 1;
	For(i,2,sqrt(n))if(n%i==0)return 0;
	return 1;
}
int kttn(int a[],int n)
{
	For(i,1,n/2)if(a[i]!=a[n-i+1])return 0;
	return 1;
}
void tachso(int n)
{
	
	int i=0;
	int m=n;
	while(n>0)
	{
		a[++i]=n%10;
		n=n/10;
	}
	//printf("%d ",m);
	if(kttn(a,i))if(ktnt(m)){d++;if(d>10){d=1;printf("\n");};printf("%d ",m);}
}
main()
{
	int t;
	scanf("%d",&t);
	//t++;
	while(t--)
	{
		d=0;
		int c,b;
		scanf("%d",&c);
		scanf("%d",&b);
		For(i,c,b)tachso(i);
		if(t!=0)printf("\n\n");
	}
}
