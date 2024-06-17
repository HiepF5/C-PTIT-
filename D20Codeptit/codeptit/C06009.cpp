#include<stdio.h>
#include<string.h>
main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	char c[1000];
	gets(c);
	if(c[6]<c[7]&&c[7]<c[8]&&c[8]<c[10]&&c[10]<c[11])printf("YES\n");
	else if(c[6]==c[7]&&c[7]==c[8]&&c[8]==c[10]&&c[10]==c[11])printf("YES\n");
	else if(c[6]==c[7]&&c[7]==c[8]&&c[10]==c[11])printf("YES\n");
	else 
	{
		int h=0;
		for(int i=6;i<=11;i++){if(i==9){i++;continue;}if(c[i]-48!=6&&c[i]-48!=8){printf("NO\n");h=1;break;}}
		if(h==0)printf("YES\n");
	}
	}
	}
