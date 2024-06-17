#include<stdio.h>
#include<string.h>
main()
{
	int cnt[305];
	for(int i=0;i<=127;i++)cnt[i]=1;
	char s[1000],t=0,ts=0,tk=0;
	gets(s);
	//for(int i=0;i<strlen(s);i++)if(s[i]>='a'&&s[i]<='z')s[i]=s[i]-32;
	for(int i=0;i<strlen(s);i++)
	if(cnt[s[i]]==1)
		{
		if(s[i]>='A'&&s[i]<='Z'){t++;}
		else if(s[i]>='a'&&s[i]<='z'){t++;}
		else if(s[i]>='0'&&s[i]<='9'){ts++;}
		else {tk++;}
			}
	else continue;
	printf("%d %d %d",t,ts,tk);
}
