#include<stdio.h>
//#define swap(m,n){int c;c=m;m=n;n=c;}
int kt(int a,int b)
{
	if(b == 0)
        return (a == 1);
    return kt(b,a%b);
}
main()
{
	int a,b;
	scanf("%d  %d",&a,&b);
	for(int i=a;i<=b;i++)
	for(int j=i+1;j<=b;j++)
	if(kt(i,j))printf("(%d,%d)\n",i,j);
}
