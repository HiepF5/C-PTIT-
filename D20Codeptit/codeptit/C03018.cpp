#include<stdio.h>
#include<math.h>
int d;
#define swap(a,b) {d=a;a=b;b=d;}
int c[10]={1,2,3,5,8,13,21};
int nguyento(int n)
{
	if(n==2||n==3||n==5||n==7)return 1;
	if(n<=1||n==4)return 0;
	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	return 1;
}
void kiemtra(int n)
{
	int s=0,k=n;
	while(n>0)
	{
		s=s+n%10;
		n=n/10;
	}
	for(int i=0;i<=6;i++)if(s==c[i]){if(nguyento(k))printf("%d ",k);break;}
}
main()
{
	int a,b;
	scanf("%d%d",&a,&b);if(a>b)swap(a,b);
	for(int i=a;i<=b;i++)kiemtra(i);
}
