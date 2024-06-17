#include<stdio.h>
#include<math.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#include<stdbool.h>
typedef long long ll;
bool pr[max];
bool nt(int n)
{
	if(n==2||n==3||n==7||n==5)return 1;
	else return 0;
}
int kt(int n)
{
	while(n)
	{
		if(!nt(n%10))return 0;
		n=n/10;
		}	
	return 1;
}
int sang()
{
	pr[1]=1;pr[0]=1;
	pr[2]=0;
	for(int i=4;i<=max;i+=2)pr[i]=1;
	For(i,3,sqrt(max))
	if(pr[i]==0)
	{
		for(int j=i*i;j<=max;j+=i)pr[j]=1;
	}
}
main()
{
	sang();
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll m,n;
		scanf("%lld %lld",&m,&n);
		int d=0;
		For(i,m,n)if(kt(i)==1&&pr[i]==0)d++;
		printf("%d\n",d);
	}
	
	
}
