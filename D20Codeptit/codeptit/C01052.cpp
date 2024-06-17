#include<stdio.h>
#include<math.h>
void dem(long long n)
{
	int d=1;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0&&i%2==0){d++;}//printf("%d ",i);}
		int s=n/i;
		
		if(s%2==0&&s*i==n){d++;}//printf("%d ",s);}
		if(s*s==n)d--;
		}
	printf("%d\n",d);
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		if(n%2!=0)printf("0\n");
		else dem(n);
		}	
}
