#include<stdio.h>
#include<math.h>
long long ts[10005];
int nt(int n)
{
	if(n==2||n==3)return 1;
	if(n<=1||n==4)return 0;
	for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
	return 1;
}
main()
{
	int t;
	scanf("%d",&t);
	for(int j=1;j<=t;j++)
	{
	int n,k,max=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){scanf("%d",&k);if(nt(k)){ts[k]++;if(max<k)max=k;}}
	printf("Test %d:\n",j);
	//printf("%d",max);
	for(int i=1;i<=max;i++)
	if(ts[i]>0){printf("%d xuat hien ",i);printf("%d lan\n",ts[i]);}
	for(int i=1;i<=max;i++)ts[i]=0;
	}
}
