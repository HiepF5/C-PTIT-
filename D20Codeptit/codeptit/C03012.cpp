#include<stdio.h>
long long a[100];
void f()
{
	a[1]=1;
	a[2]=1;
	for(int i=3;i<=40;i++)a[i]=a[i-1]+a[i-2];	
//	for(int i=1;i<=40;i++)printf("%lld ",a[i]);
}
main()
{
	f();
	int n;
	scanf("%d",&n);
	for(int i=1;i<=40;i++)
	{
	if(a[i]==n){printf("1");return 0;}
	if(a[i]>n){printf("0");return 0;}
	}
	
}
