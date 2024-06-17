#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;
main()
{
	int n;
	int len=0, xuong=0, minl=50005, minx=50005;
	scanf("%d",&n);
	For(i,0,n)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		len+=a;
		xuong+=b;
		if(a<minx)minx=a;
		if(b<minl)minl=b;
	}
	len+=minl;
	xuong+=minx;
	printf("%d",(len>xuong)?len:xuong);
}
