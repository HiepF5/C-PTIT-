#include<string.h>
#include<stdio.h>
main()
{
	int c=0,l=0;
	char n[10];
	gets(n);
	for(int i=0;i<=strlen(n)-1;i++){if((n[i]-'0')%2==0)c++;else l++;}
	printf("%d %d",l,c);
}

