#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<stdlib.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define sp " \n"
typedef long long ll;
int tim(char **x,int n,char *p)
{
	for(int i=0;i<n;i++)if(!strcmp(x[i],p))return i;
	return -1;
}
void chuthuong(char *s)
{
		for(int i=0;i<strlen(s);i++)
	{
	  s[i]=tolower(s[i]);
	}
}
int main()
{
	char *s=(char*)malloc(100*sizeof(char));
	char **x=(char **)malloc(100*sizeof(char));
	gets(s);
	chuthuong(s);
	char *p;
	int n=0,dem[100];
	p=strtok(s,sp);
	while(p!=NULL)
	{
		int t=tim(x,n,p);
		if(t==-1){x[n]=p;dem[n]=1;n++;}
		else dem[t]++;
		p=strtok(NULL,sp);
	}
	for(int i=0;i<n;i++)printf("%s %d\n",x[i],dem[i]);
	return 0;
}

