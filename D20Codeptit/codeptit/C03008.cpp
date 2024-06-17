#include<stdio.h>
#include<math.h>
main()
{
	int n;
	scanf("%d",&n);
	if(n>8129)n=8129;
	for(int j=2;j<=n;j=j+2)
	{
		int s=1,k=j;
		for(int i=2;i<=sqrt(j);i++)if(j%i==0){s=s+i+j/i;}
		if(s==k)printf("%d ",s);
	}
}
