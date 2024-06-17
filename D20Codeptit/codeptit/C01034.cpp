#include<stdio.h>
#include<math.h>
long long a[31625];
long long b[31625];
void taomang()
{
	for(int i=1;i<=31625;i++)a[i]=i*i;
}
main()
{
	taomang();
	long long m,n,j=1,t=0;
	scanf("%lld%lld",&m,&n);
	for(int i=1;i<=31625;i++)
	{
		if(a[i]<m)continue;
		if(a[i]>n)break;
		if(a[i]>=m&&a[i]<=n){t++;b[j]=a[i];j++;}
		
	}
	printf("%lld\n",t);
	for(int i=1;i<=t;i++)printf("%lld\n",b[i]);
}
