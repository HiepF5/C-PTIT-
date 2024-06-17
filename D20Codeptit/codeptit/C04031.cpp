#include<stdio.h>
int a[105];
int xuat(int i,int tt)
{
//	printf("%d %d",i,tt);
	for(int j=i;j<i+tt-1;j++)if(a[j]>=a[j+1])return 0;
	for(int j=i;j<i+tt;j++)printf("%d ",a[j]);
	printf("\n");
}
void tinh(int n)
{
	int t=1,tt=0;
	for(int i=1;i<n;i++)if(a[i]<a[i+1])t++;
	else 
	{
		if(t>tt){tt=t;}
		t=1;
}
	printf("%d\n",tt);
	for(int i=1;i<=n-tt+1;i++){xuat(i,tt);}
}
main()
{
	int T;
	scanf("%d",&T);
	for(int t=1;t<=T;t++)
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)scanf("%d",&a[i]);
		printf("Test %d:\n",t);
		tinh(n);
	}
}
