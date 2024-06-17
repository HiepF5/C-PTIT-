#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#define For2(i,a,b,k) for(int i=a;i<=b;i+=k)
typedef long long ll;
//bool pr[max];
ll LCM(ll n,ll m)
{
	if(m%n==0)return n;
	return LCM(m%n,n);
}
/*bool sang()
{
	pr[0]=pr[1]=1;pr[2]=0;
	For2(i,4,max,2)pr[i]=1;
	For(i,3,sqrt(max))
	if(pr[i]==0)For2(j,i*i,max,i)pr[j]=1;
}*/
int kt(int n)
{
	ll s=1;
	For(i,1,n)s=s*i/LCM(s,i);
	printf("%lld\n",s);
}
main()
{
	//sang();
	//For(i,3,100)if(pr[i]==0)printf("%d",i);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		kt(n);
	}
}



