#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<string.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
#define Forl(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
    char a[20]={},b[20]={};
    scanf("%s",&a);
    scanf("%s",&b);
    ll d1=0,d2=0,d3=0,d4=0;
    for(int i=0;i<strlen(a);i++){if(a[i]=='6')a[i]='5';d1=d1*10+a[i]-48;}
    for(int i=0;i<strlen(b);i++){if(b[i]=='6')b[i]='5';d2=d2*10+b[i]-48;}
    for(int i=0;i<strlen(a);i++){if(a[i]=='5')a[i]='6';d3=d3*10+a[i]-48;}
    for(int i=0;i<strlen(b);i++){if(b[i]=='5')b[i]='6';d4=d4*10+b[i]-48;}
    printf("%lld %lld\n",d1+d2,d3+d4);
	}
}
