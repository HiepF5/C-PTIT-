#include<stdio.h>
#include<string.h>
main()
{
	char c[1000];
	gets(c);
	int h=1;
	for(int i=0;i<strlen(c);i++)if(c[i]!=' '){printf("%c",c[i]);h=0;} else if(h==0) {printf("\n");h=1;}
	}
