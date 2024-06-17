#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;
#include<string.h>
#define swap(a,b) {int c;c=a;a=b;b=c;}
void hoandoi(int *d1,int *d2,int n)
{
	for(int i=0;i<n;i++)swap(d1[i],d2[i]);
}
int sub(char a[], char b[])
{
	int d1[1005],d2[1005],k[1005];
    while(strlen(a)<strlen(b)) {char c[505]="0";strcat(c,a);strcpy(a,c);}
    while(strlen(b)<strlen(a)) {char c[505]="0";strcat(c,b);strcpy(b,c);}
    For(i,0,strlen(a))d1[i]=a[i]-48;
    For(i,0,strlen(a))d2[i]=b[i]-48;
    For(i,0,strlen(a))if(d1[i]<d2[i]){hoandoi(d1,d2,strlen(a));break;}else if (d1[i]==d2[i])continue;else break;
    int borrow=0;
    int j=0;
    for(int i=strlen(a)-1; i>=0;i--)
    {
        int tmp=d1[i]-d2[i]-borrow;
        if(tmp<0)
        {
            tmp+=10;
            borrow=1;
        }
        else borrow=0;
        k[j++]=tmp%10;
    }
    int i;
    for(i=strlen(a)-1;i>=0;i--){if(k[i]!=0)break;if(i==0){printf("0");return 0;}}
	for(;i>=0;i--)printf("%d",k[i]);
   
}
int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
    char a[1005],b[1005];
    scanf("%s",&a);
    scanf("%s",&b);
    sub(a,b);
    printf("\n");
	}
}
