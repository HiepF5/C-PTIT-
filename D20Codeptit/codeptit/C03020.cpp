#include<stdio.h>
#include<math.h>
#define For(i,n,m) for(int i=n;i<=m;i++)
#define swap(m,n) {int c;c=m;m=n;n=c;}
int a[20];
int kttn(int a[],int n)
{
	for(int i=1;i<=n/2;i++)if(a[i]!=a[n-i+1])return 0;
	return 1;
}
int tachso(int n)
{
	long long m=n;
	long long i=0;
	long long s=0;
	long long t=0;
	while(n>0)
	{
		s=s+n%10;
		if(n%10==6)t=1;
		a[++i]=n%10;
		n=n/10;
	}
	if(t==1&&(s%10==8)&&kttn(a,i)){printf("%lld ",m);}
}
main()
{
		long long n,m;
		scanf("%lld %lld",&n,&m);
		if(n>m)swap(m,n);
		For(i,n,m)tachso(i);
	//	printf("%lld ",d);
}
