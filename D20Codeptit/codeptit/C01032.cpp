#include<stdio.h>
void tinh(long long n)
{
	long long s=1;
	long long k=1;
    for(long long i=2;n!=1 ; )
    {
	if(n%i==0){n=n/i;if(k==1){s=s*i;k=0;}}
    else 
		{
		if(i==2)i++;
    	else i=i+2;
    	k=1;
		}
	}
	printf("%lld\n",s);
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
