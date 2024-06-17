#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#define For2(i,a,b) for(int i=a;i<=b;i+=2)
typedef long long ll;
bool pr[max];
void sang()
{
	pr[0]=1;
	pr[1]=1;
	pr[2]=0;
	For2(i,4,max)pr[i]=1;
	For(i,3,sqrt(max))
	if(pr[i]==0)for(int j=i*i;j<=max;j+=i)pr[j]=1;
}
main()
{
	sang();
	//For(i,2,100)if(pr[i]==0)printf("%d",i);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		For(i,2,n/2)if(pr[i]==0&&pr[n-i]==0)printf("%d %d ",i,n-i);
		printf("\n");
	}
}



