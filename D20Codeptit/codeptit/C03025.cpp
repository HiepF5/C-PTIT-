#include<stdio.h>
#include<math.h>
int kiemtra(long long n)
{
	if(n==2||n==3||n==5||n==7)return 1;
	if (n==0||n==1||n==4||n==6||n==9||n==8)return 0;
	for(long long i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	return 1;
}
int kiemtrachuso(long long n)
{
	while (n!=0)
	{
		long long x=n%10;
		if(kiemtra(x)==0)return 0;
		n=n/10;
	}
	return 1;
}
int kiemtratong(long long n)
{
	long long s=0;
	while (n!=0)
	{
		long long x=n%10;
		s=s+x;
		n=n/10;
	}
	if(kiemtra(s)==1)return 1;
	else return 0;
}
main()
{
	int t;
	scanf("%d",&t);
	while (t!=0)
	{
		int d=0;
		long long n,m;
		scanf("%d%d",&n,&m);
		if(n<10){d=4;n=23;}
		if(n%2==0)n=n+1;
		for(long long i=n;i<=m;i=i+2)
		{
			if(kiemtrachuso(i)==1&&kiemtratong(i)==1&&kiemtra(i)==1)d++;
		}
		printf("%d\n",d);
	t--;
}
	
}
