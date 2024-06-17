#include<stdio.h>
#include<math.h>
long long s=0;
void tinh(long long n)
{
    for(int i=2;i<=sqrt(n);i++)
	{if(n%i==0){while(n%i==0){printf("%d ",i);n/=i;}}}
	if(n>1) printf("%d ",n);
	printf("\n");
}
main(){

    long long n;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
    	long long k;
       scanf("%lld",&k);
       tinh(k);
  }
   return 0;
}
