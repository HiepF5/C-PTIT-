#include<stdio.h>
#include<string.h>
main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	char c[10];
	gets(c);
	int s=0;
	for(int i=0;i<strlen(c);i++)s+=(c[i]-48);
	printf("%d\n",s);
    }
}
