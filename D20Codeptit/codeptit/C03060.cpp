#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
main()
{
	int n,k;
	int d=0;
	scanf("%d%d",&n,&k);
	For(i,1,n)
	{
		int j=i;
		while(j%2==0){d++;j=j/2;}
	}
	//printf("%d",d);
	if(d>=k)printf("Yes");
	else printf("No");
}


