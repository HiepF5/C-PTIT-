#include<stdio.h>
#include<math.h>
int a[100005];
void tinh(int n)
{
	int s=0;
    int k=n;
    for(int i=2;i<=sqrt(n);){if(n%i==0){while(n%i==0){s=s+i;n/=i;}}if(i==2)i++;else i=i+2;}
	if(n>1)s=s+n;
	a[k]=s;
	printf("%d ",a[k]);
}
void tao()
{
		for(int i=1;i<=100000;i++)tinh(i);
}
main(){
	tao();
    int n;
    a[0]=0;
    scanf("%d",&n);
    long long x=0;
    for(int i=1;i<=n;i++)
    {
       int k;
      	scanf("%d",&k);
      	x=x+a[k];
  	}
   printf("%d",x);
   return 0;
}
