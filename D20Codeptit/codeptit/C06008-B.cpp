#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define sp " "
typedef long long ll;
int main()
{
	char *s;
	s= (char*)malloc (100*sizeof(char));
	char **x=(char**)malloc(100*sizeof(char));
	gets(s);
	char *p;
	p=strtok(s,sp);
	int n=0;
	while(p!=NULL)
	{
		int check=0;
		for(int i=0;i<n;i++)
		{
			if(!strcmp(x[i],p)){check=1;break;}
		}
		if(check==0)x[n++]=p;
		p=strtok(NULL,sp);
	}
	for(int i=0;i<n;i++)printf("%s ",x[i]);
	return 0;
}

