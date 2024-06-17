#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#define swap(a,b)  int c;c=a;a=b;b=c;
typedef long long ll;
main()
{
	int a[105]={};
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){scanf("%d",&a[i]);}
	for(int i=0;i<n-1;i++)
	{
	int min;
	min=i;
	for(int j=i+1;j<n;j++)if(a[j]<=a[min])min=j;
	swap(a[i],a[min]);
	for(int k=0;k<n;k++)printf("%d ",a[k]);printf("\n");
	}
}
