#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define sp " \n"
typedef long long ll;
int main()
{

	char *s=(char*)malloc(100*sizeof(char));
	gets(s);
	char *p;
	int t=0;
	p=strtok(s,sp);
	while(p!=NULL)
	{
		printf("%s\n",p);
		p=strtok(NULL,sp);
	}
	return 0;
}

