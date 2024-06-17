#include<stdio.h>
int c;
#define swap(a,b) {c=a;a=b;b=c;}
main()
{
	int a,b;
	int s=0;
	scanf("%d%d",&a,&b);if(a>b)swap(a,b);
	for(int i=a;i<=b;i++)s+=i;
	printf("%d",s);
}
