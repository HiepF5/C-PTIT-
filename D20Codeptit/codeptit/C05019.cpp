#include<stdio.h>
int a[101][101];
long long b[10005];
int pr[10000];
int nt()
{
    for(int i=2;i<=10000;i=i+2)b[i]=1;
    for(int i=3;i<=10000;i=i+2)
    if(b[i]==0)
    for(int j=i*i;j<=10000;j=j+i)b[j]=1;
    b[2]=0;
}
int main()
{
   nt();
   int ll=1;
   for(int i=2;i<=10000;i++)
   if(b[i]==0)pr[ll++]=i;
 // for(int i=1;i<ll;i++)
  // printf("%d ",pr[i]);
   int T;
   scanf("%d",&T);
	  for(int t=1;t<=T;t++)
	  {
	     int n;
	     scanf("%d",&n);
printf ("Test %d:\n",t);
	     int i,d=0,gt=1,h=n-1,c=n-1;
	while(d<=n/2)
	{
	for(i=d;i<=c;i++)a[d][i]=pr[gt++];
	for(i=d+1;i<=h;i++)a[i][c]=pr[gt++];
	for(i=c-1;i>=d;i--)a[h][i]=pr[gt++];
	for(i=h-1;i>d;i--)a[i][d]=pr[gt++];
	d++;h--;c--;
	}
	for(int i=0;i<=n-1;i++)
	{for(int j=0;j<=n-1;j++)
	printf("%lld ",a[i][j]);	printf("\n");
	}
	  }
	 
	  
}
