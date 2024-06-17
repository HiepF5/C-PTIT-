#include<stdio.h>
int min(int a,int b)
{
	if(a>b)return b;
	return a;
}
main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",min(a,min(b,c)));
}
