#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
int k=0;
int m=0;
typedef struct pokemon
{
	char s[50];
	int s1;
	int s2;
}pkm;
void nhap(pkm *a)
{
	scanf("%s\n",&a->s);
	scanf("%d",&a->s1);
	scanf("%d",&a->s2);
}
void xuat(pkm a)
{
	printf("%d %d",a.s1,a.s2);
}
int dem(pkm a)
{
		int dd=0;
		int k=0;
		lap:
		{
		int d=0;
		while(a.s2>=a.s1){d++;a.s2=a.s2-a.s1+2;}
		//a.s2=a.s2+d*2;
		dd=dd+d;
		}
		if(a.s2>=a.s1)goto lap;
		return dd;
}
void luu(pkm a, int c,char s0[])
{
	m=c;
	strcpy(s0,a.s);
//	printf("%s",s0);
}
main()
{
	int t;
	char s0[50];
	scanf("%d\n",&t);
	while(t--)
	{
		pkm a;
		nhap(&a);
		//xuat(a);
		int c=dem(a);
		k=k+c;
		if(c>m)luu(a,c,s0);
		//printf("%s",s0);
	}
	printf("%d\n",k);
	printf("%s",s0);
}



