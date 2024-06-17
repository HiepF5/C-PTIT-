#include<string.h>
#include<stdio.h>
main()
{
	char s[10];
	gets(s);
	char c[1];
	c[0]=s[0];
	s[0]=s[strlen(s)-1];
	s[strlen(s)-1]=c[0];
	int i=0,h=1;
	for(i=0;i<strlen(s);i++)if(s[i]=='0')h=1;else {h=0;break;}
	for(;i<strlen(s);i++)printf("%c",s[i]);
	}

