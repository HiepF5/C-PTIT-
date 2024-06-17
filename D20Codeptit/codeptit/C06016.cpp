#include<stdio.h>
#include<string.h>
main()
{
	char s1[105];
	char s2[105];
	int k;
	gets(s1);
	gets(s2);
	scanf("%d",&k);
//	strncat(s2,s1,k);
//	puts(s1);
	int n1=strlen(s1);
	int n2=strlen(s2);
	for(int i=0;i<k-1;i++){printf("%c",s1[i]);}
	for(int i=0;i<n2;i++){printf("%c",s2[i]);}
	for(int i=k-1;i<n1;i++){printf("%c",s1[i]);}
}
