#include<stdio.h>
main()
{
int T;
scanf("%d",&T);
for(int t=1;t<=T;t++)
{
int a[50][50];
printf("Test %d:",t);
int n,m;
scanf("%d%d",&n,&m);
for(int i=1;i<=n;i++)
for(int j=1;j<=m;j++)
scanf("%d",&a[i][j]);
printf("\n");
int k=0,max=-999;
for(int i=1;i<=n;i++)
{
int s=0;
for(int j=1;j<=m;j++)
{
s+=a[i][j];
}
if(max<s){max=s;k=i;}
}
int x=k;
for(int i=1;i<=m;i++)a[k][i]=0;
k=0;max=0;
for(int i=1;i<=m;i++)
{
int s=0;
for(int j=1;j<=n;j++)s+=a[j][i];
if(max<s){max=s;k=i;}
}
for(int i=1;i<=n;i++)a[i][k]=0;
for(int i=1;i<=n;i++)
{
if(i==x)continue;
else for(int j=1;j<=m;j++)
{if(j==k)continue;
else printf("%d ",a[i][j]);}
printf("\n");
}
}
}
