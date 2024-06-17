#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
int tachso(int n)
{
	int tong=0;
	while(n)
	{
		tong+=n%10;
		n/=10;
	}
	return tong;
}
int uocso(int n)
{
	int tongu=0;
	For(i,2,sqrt(n))
	{
		while(n%i==0){tongu+=tachso(i);n/=i;}
	}
	if(n>1)tongu+=tachso(n);
	return tongu;
}

main()
{
	int n;
	scanf("%d",&n);
	//printf("%d %d",,);
	if(tachso(n)==uocso(n))printf("YES");
	else printf("NO");

}


