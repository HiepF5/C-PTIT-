#include<stdio.h>
#include<string.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	char s[100];
	scanf("%s",s);
	int h=0;
	for(int i=0;i<strlen(s);i++)
	{
	if(s[i]-48==6||s[i]-48==0||s[i]-48==8)continue;
	else {printf("\nN0");h=1;break;}
	}
	if(h==0)printf("\nYES");
    }
}
