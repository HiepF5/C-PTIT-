#include<stdio.h>
#define swap(a,b){int c;c=b;b=a;a=c;}
main()
{
	int a[]={0,1,2,5,10,20,50,100,200,500,1000};
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n,d=0;
	scanf("%d",&n);
	int i=10;
	while(i>0)
	{
		if(n>=a[i]){n=n-a[i];d++;}
		else i--;
	}
	printf("%d\n",d);
	}
}
