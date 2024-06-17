#include<stdio.h>
#include<string.h>
main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char c[20];
		gets(c);
		int n=strlen(c);
		int d=0,dl=0;
		for(int i=0;i<n;i++)if((c[i]-48)%2==0)d++;
				else dl++;
		printf("%d %d\n",dl,d);
	}
}
