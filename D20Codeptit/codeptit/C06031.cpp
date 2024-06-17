#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define swap(a,b){int c;c=a;a=b;b=c;}
typedef long long ll;
void sort(int l[],int n)
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(l[j]>l[j+1])swap(l[j],l[j+1]);
	//for(int i=0;i<n;i++)printf("%d ",l[i]);
}
int l[1005];
void daytang(int n,char s[])
{
	int max=-11111;
	for(int i=0;i<n;i++)
	{
		l[i]=1;
		for(int j=0;j<i;j++)if(s[i]>s[j]&&l[j]+1>l[i])l[i]=l[j]+1;
	}
	sort(l,n-1);
	printf("%d",26-l[n-1]);
}
main()
{
	char s[100];
	scanf("%s",&s);
	int n=strlen(s);
	daytang(n,s);
} 
