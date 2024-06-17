#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
void kt(long long n)
{
	long long m=n;
	for(int i=2;i<=sqrt(n);i++)
	{
	int d=0;
	while(n%i==0){
		 d++;
		 n=n/i;
	}
	if(d==0)continue;
	else {printf("%lld = %d^%d",m,i,d);break;}
	
	}
	for(int i=2;i<=sqrt(n);i++)
	{
	int d=0;
	while(n%i==0){
		 d++;
		 n=n/i;
	}
	if(d==0)continue;
	else printf(" * %d^%d",i,d);
	}
	if(n>1)printf(" * %d^%d",n,1);
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		kt(n);
		printf("\n");
	}

}


