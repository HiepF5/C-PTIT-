#include<stdio.h>
long long s=0;
void tinh(long long n)
{
    long long i=2;
    for(long long i=2;n!=1 ; )
    if(n%i==0){n=n/i;printf("%d",i); break;}
    else i++;
    for(long long i=2;n!=1 ; )
    if(n%i==0){n=n/i;printf("x%d",i);}
    else i++;
}
main(){

    long long k;
    scanf("%lld",&k);
    tinh(k);
   	return 0;
}
