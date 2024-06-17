#include<stdio.h>
#define swap(a,b){int c;c=a;a=b;b=c;}
int UCLN(int a,int b)
{
	if(b>a)swap(a,b);
	if(a%b==0)return b;
	else {
		a=a%b;
		UCLN(a,b);
		}
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		//printf("%d %d",a,b);
		printf("%d\n",UCLN(a,b));
	}
}
