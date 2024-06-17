#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
#define swap(a,b) {int c; c=a;a=b;b=c;}
typedef long long ll;
#define sp " "
int main()
{
	char s1[1000];
	gets(s1);
	char s2[1000];
	gets(s2);
	char *p;
	p=strtok(s1,sp);
	while(p!=NULL)
	{
		if(strcmp(p,s2))printf("%s ",p);
		p=strtok(NULL,sp);
	}
	return 0;
}

