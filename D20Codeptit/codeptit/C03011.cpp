#include<stdio.h>
#include<string.h>
#define swap(a,b){int c;c=a;a=b;b=c;}
int a[10];
void tachso(int n)
{
	long long s=0,k=n;
	while(n>0)
	{
		s=s+a[n%10];
		n/=10;
	}
	if(k==s)printf("%lld ",k);
}
void giaithua()
{
	a[0]=1;
	for(int i=1;i<=10;i++)a[i]=a[i-1]*i;
}
main()
{
	giaithua();
	int n,m;
	scanf("%d%d",&n,&m);
	if(n>m)swap(n,m);
	if(m>40585)m=40586;
	for(int i=n;i<=m;i++)
	{
		tachso(i);
	}
}
