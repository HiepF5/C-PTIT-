#include<stdio.h>
#include<math.h>
int t=0;
int ktnt(int n)
{
	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	printf("%d ",n);
	t++;
}
int tachso(int n)
{
	int m=n;
	int s=0;
	while(n>0)
	{
		s=s+n%10;
		n/=10;
	}
	if(s%5==0)ktnt(m);
	return 0;
}
main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i+=2)
	{
		tachso(i);
	}
	printf("\n%d",t);
}
