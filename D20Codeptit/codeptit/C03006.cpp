#include<stdio.h>
#include<math.h>
#define For(i,n,m) for(int i=n;i<=m;i++)
void ptnt(int n)
{
	For(i,2,sqrt(n))
	{
		int d=0;
		if(n%i==0){
		while(n%i==0){d++;n=n/i;}
		printf("%d(%d) ",i,d);}
	}
	if(n>1)printf("%d(%d)",n,1);
	printf("\n");
}
main()
{
	int t;
	scanf("%d",&t);
	For(i,1,t)
	{
	int n;
	scanf("%d",&n);
	printf("Test %d: ",i);
	ptnt(n);
}
}
