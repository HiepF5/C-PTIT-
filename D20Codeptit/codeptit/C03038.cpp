#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
void tim(int n,int p)
{
	int d=0;
	for(int i=p;i<=n;i=i+p)if(i%p==0)
	{
		int j=i;
		while(j%p==0)
		{
			d++;
			j=j/p;
		}
	}
	printf("%d\n",d);
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,p;
		scanf("%d %d",&n,&p);
		tim(n,p);
	}
}



