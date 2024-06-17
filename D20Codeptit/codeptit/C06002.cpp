#include<stdio.h>
#include<string.h>
main()
{
	char s[100],*t;
	gets(s);
	for(int i=0;i<strlen(s);i++)if(s[i]>='a'&&s[i]<='z')s[i]=s[i]-32;
	//t=strupr(s) ;
	puts(s);
}
