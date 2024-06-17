#include<stdio.h>
#include<string.h>
main()
{
	int n;
	scanf("%d\n",&n);
	while(n--)
	{
		char a[10];
		gets(a);
		if(a[0]==a[strlen(a)-1])printf("YES\n");
		else printf("NO\n");
	}
}
