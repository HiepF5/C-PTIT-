#include<stdio.h>
#include <stdlib.h>
typedef long long ll;
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
void nhap(int n, int *a)
{
	for(int i=0;i<n;i++)scanf("%d",(a+i));
}
void xuat(int *a,int n)
{
	for(int i=0;i<n;i++)printf("%d ",*(a+i));
}
void tinh(int *a,int n)
{
	int min=a[1]-a[0],d=0;
	for(int i=0;i<n-1;i++)if(a[i+1]-a[i]<min)min=*(a+i+1)-*(a+i);
	for(int i=0;i<n-1;i++)if(a[i+1]-a[i]==min)d++;
	printf("%d %d\n", min,d);
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n=0;
		scanf("%d",&n);
		int *a;
		a=(int *)malloc(n*sizeof(int));
		nhap(n,a);
		qsort(a, n, sizeof(int), cmpfunc);
		tinh(a,n);
		free(a);
}
}



