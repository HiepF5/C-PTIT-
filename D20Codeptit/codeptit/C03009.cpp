#include<stdio.h>
#include<math.h>
int a,b;
#define swap(a,b){int c;c=a;a=b;b=c;}
main()
{
	
	scanf("%d%d",&a,&b);
	if(a>b)swap(a,b);
	if(b>8129)b=8129;
	if(a%2!=0)a=a-1;
	for(int j=a;j<=b;j=j+2)
	{
		int s=1;
		for(int i=2;i<=sqrt(j);i++)if(j%i==0){s=s+i+j/i;}
		if(s==j)printf("%d ",s);
	}
	
}
