#include<stdio.h>
#include<math.h>
#define swap(a,b){int c;c=a;a=b;b=c;}
int a[100];
int b[100];
void sort(int a[],int n)
{
	for(int i=n;i>=2;i--)
	for(int j=1;j<=i-1;j++)if(a[j]>a[j+1])swap(a[j],a[j+1]);
}
main()
{
		int n,j=0,k=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){int x;scanf("%d",&x);if(x%2==0){j++;a[j]=x;}else {k++;b[k]=x;}}
		sort(a,j);
		sort(b,k);
	//	printf("%d %d",j,k);
		for(int i=1;i<=j;i++)printf("%d ",a[i]);
		for(int i=1;i<=k;i++)printf("%d ",b[i]);
}
