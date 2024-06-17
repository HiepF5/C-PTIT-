#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
int canbang(int n)
{
	int tc=0,tl=0;
	while(n)
	{
		if((n%10)%2==0)tc++;
		else tl++;
		n/=10;
	}
	if(tc!=tl)return 0;
	return 1;
}
main()
{
	int n;
	int t=0;
	scanf("%d",&n);
	for(int i=pow(10,n-1);i<=pow(10,n)-1;i++)
	{if(canbang(i)){printf("%d ",i);t++;}if(t==10){printf("\n");t=0;}}
}
