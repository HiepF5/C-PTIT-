#include<stdio.h>
#include<string.h>
int kt(char s[])
{
	int d=0;
	int n=strlen(s);
	for(int i=0;i<n;i++)
		{
			if(s[i]-48==1)d=1;
			if(s[i]-48==2||s[i]-48==3||s[i]-48==4||s[i]-48==5||s[i]-48==6||s[i]-48==7){printf("INVALID");return 0;}
		}
		//printf("%d",d);
	if(d==0){printf("INVALID");return 0;}
	int i;
	for(i=0;i<n;i++)if(s[i]-48==1){printf("1");break;}
	for(i++;i<n;i++)if(s[i]-48==1)printf("1");else printf("0");
}
main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[20];
		scanf("%s",&s);
		kt(s);
		printf("\n");
	}
}
