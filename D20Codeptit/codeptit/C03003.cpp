#include<stdio.h>
#include<math.h>
long long nt(long long m)
{
	if(m==3)return 1;
	for(long long i=2;i<=sqrt(m);i++)if(m%i==0)return 0;
	return 1;
}
main()
{
	long long n;
	scanf("%lld",&n);
	if(n==1)printf("2\n");
	else 
	{
	printf("2\n");
	long long i=3;
	while(n>1)
	{
		if(nt(i)){printf("%lld\n",i);n--;}
		i+=2;
	}
	}
}
