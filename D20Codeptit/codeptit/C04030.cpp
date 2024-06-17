#include<stdio.h>
#define swap(a,b){int c;c=b;b=a;a=c;}
void sortt(int a[],int n)
{
	for(int i=n;i>=2;i--)
	for(int j=1;j<=i-1;j++)if(a[j]>a[j+1])swap(a[j],a[j+1])
}
void sortg(int a[],int n)
{
	for(int i=n;i>=2;i--)
	for(int j=1;j<=i-1;j++)if(a[j]<a[j+1])swap(a[j],a[j+1])
}
main()
{
	int a[105],b[105];
	int t;
	scanf("%d",&t);
for(int j=1;j<=t;j++)
	{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)scanf("%d",&b[i]);
	sortt(a,n);
	sortg(b,n);
	printf("Test %d:\n",j);
	for(int i=1;i<=n;i++)
	{
		printf("%d %d ",a[i],b[i]);
	}
	printf("\n");
	}
}
