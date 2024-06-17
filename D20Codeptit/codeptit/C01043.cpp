#include<stdio.h>
#include<string.h>
int a[10];
void giaithua()
{
	a[0]=1;
	for(int i=1;i<=10;i++)a[i]=a[i-1]*i;
}
main()
{
	giaithua();
	char s[7];
	gets(s);
	long long tt=0,t=0;
	for(int i=0;i<strlen(s);i++)
	{
	t=t+a[s[i]-48];
	tt=tt*10+s[i]-48;
	}
	//printf("%lld %lld ",t,tt);
	if(tt==0){printf("1");return 0;}
	if(tt==t)printf("1");
	else printf("0");
}
