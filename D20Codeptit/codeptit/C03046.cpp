#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
bool tn(int n)
{
	int s=0,d=0;
	int m=n;
	while(n)
	{
		if(n%10==4)return 0;
		d+=n%10;
		s=s*10+n%10;
		n/=10;
	}
	if(d%10!=0)return 0;
	else 
	{
	if(s==m)return 1;
	return 0;
	}
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=pow(10,n-1);i<=pow(10,n)-1;i++)
		if(tn(i))printf("%d ",i);
		printf("\n");
	}
}


