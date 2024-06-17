#include<stdio.h>
#include<string.h>
int ktc(char a[],int n)
{
	int tc=0,tl=0;
	for(int i=0;i<=n;i++)
	{
		if((a[i]-48)>=0&&(a[i]-48)<=9){if((a[i]-48)%2==0)tc++;else tl++;}
		else {printf("INVALID\n");return 0;}
		}
//	printf("%d%d",tc,tl);
	if(tc>tl){printf("YES\n");return 0;}
	else if(tc<=tl){printf("NO\n");return 1;}
}
int ktl(char a[],int n)
{
	int tc=0,tl=0;
	for(int i=0;i<=n;i++)
	{
		if((a[i]-48)>=0&&(a[i]-48)<=9){if((a[i]-48)%2==0)tc++;else tl++;}
		else {printf("INVALID\n");return 0;}
		}
		//printf("%d%d",tc,tl);
	if(tl>tc){printf("YES\n");return 0;}
	else if(tl<=tc){printf("NO\n");return 1;}
}
main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char a[1000];
		scanf("%s",a);
		int n=strlen(a)-1;
		if(a[0]=='0')printf("INVALID\n");
		else 
		{
		if(n%2==1)ktc(a,n);
		else ktl(a,n);
		}
	}
}
