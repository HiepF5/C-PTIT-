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
	//	printf("%c%c",c[0],c[n-1]);
		for(int i=0;i<=n/2;i++)if(c[i]!=c[n-i-1]){n=0;printf("NO\n");}
		if(n!=0)printf("YES\n");
	}
}
