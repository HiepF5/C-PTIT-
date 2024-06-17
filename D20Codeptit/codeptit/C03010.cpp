#include<stdio.h>
#include<string.h>
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
	int n;
	scanf("%d",&n);
	if(n>40585)n=40586;
	for(int i=1;i<=n;i++)
	{
		tachso(i);
	}
}
