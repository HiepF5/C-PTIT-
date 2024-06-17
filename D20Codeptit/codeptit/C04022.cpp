#include<stdio.h>
#define swap(a,b){int c;c=a;a=b;b=c;}
long long a[10005];
main()
{
	int n;
	int max=0,max2=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){scanf("%d",&a[i]);if(a[i]>max)max=a[i];}
	for(int i=1;i<=n;i++)if(a[i]>max2&&a[i]!=max)max2=a[i];
	printf("%d ",max);printf("%d ",max2);
}
