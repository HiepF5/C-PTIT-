#include<stdio.h>
#include<math.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#include<stdbool.h>
typedef long long ll;
bool pr[max];
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
		m=sqrt(m);
		n=sqrt(n);
		int d=0;
		For(i,m,n)if(pr[i]==0)d++;
		printf("%d\n",d);
	}
	
	
}
