#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
typedef struct PhanSo
{
    int tuso, mauso;
} PS;
int UCLN(int a,int b)
{
	if(a%b==0)return b;
	return UCLN(b,a%b);
}

PS quydong(PS a, PS b)
{
	PS c;
	c.mauso=(a.mauso*b.mauso)/UCLN(a.mauso,b.mauso);
	c.tuso= c.mauso/a.mauso*a.tuso;
	return c;
}
PS rutgon(PS a)
{
	PS c;
	c.tuso=a.tuso/UCLN(a.tuso,a.mauso);
	c.mauso=a.mauso/UCLN(a.tuso,a.mauso);
	return c;
}
PS tong(PS a,PS b)
{
	PS c;
	c.tuso= a.tuso+b.tuso;
	c.mauso=a.mauso;
	c=rutgon(c);
	return c;
}
PS chia(PS a, PS b)
{
	PS c;
	c.tuso=a.tuso;
	c.mauso=b.tuso;
	c=rutgon(c);
	return c;
}
void print(PS a)
{
	printf("%d/%d ",a.tuso,a.mauso);
}
main()
{
	int T;
	scanf("%d",&T);
	for(int t=1;t<=T;t++)
	{
		PS a,b;
		scanf("%d %d",&a.tuso,&a.mauso);
		scanf("%d %d",&b.tuso,&b.mauso);
		printf("Case #%d:\n",t);
		a=rutgon(a);
		b=rutgon(b);
		//print(a);
		//print(b);
		PS c,d;
		c=quydong(a,b);
		print(c);
		d=quydong(b,a);
		print(d);
		printf("\n"); 
		print(tong(c,d));
		printf("\n");
		print(chia(c,d));
		printf("\n");
	}
}



