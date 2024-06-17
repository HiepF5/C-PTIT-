#include<stdio.h>
#include<math.h>
int nguyento(int n)
{
	if(n==2||n==3||n==5||n==7)return 1;
	if(n<=1||n==4)return 0;
	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	return 1;
}
main()
{
	int n;
	int a[100];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	int j=1,d=0;
	int b[100];
	for(int i=1;i<=n;i++)if(nguyento(a[i])){d++;b[j]=a[i];j++;}
	printf("%d ",d);
	for(int i=1;i<=d;i++)printf("%d ",b[i]);
}
