#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int t;
int tach(char *s, char *s1, char *s2,char *ss);
int gop(char *s, char *s1, char *s2,char *ss)
{
	int n=strlen(s)/2;
	char *x=(char *)malloc(1000* sizeof(char));
	int j=0;
	for(int i=0;i<n;i++)
	{
		x[j++]=s2[i];
		x[j++]=s1[i];
	}
	x[j]='\0';
	//puts(x);
	if(strcmp(x,ss)==0){printf("%d\n",t);return 0;}
	else {if(t>100){printf("-1\n");return 0;}t++;tach(x,s1,s2,ss);}
}
int tach(char *x, char *s1, char *s2,char *ss)
{
	int n=strlen(x)/2;
	int j=0;
	for(int i=0;i<n;i++)s1[i]=x[j++];
	for(int i=0;i<n;i++)s2[i]=x[j++];
	gop(x,s1,s2,ss);
}
int nhap(char *s, char *s1, char *s2,int *n)
{
	scanf("%d",&n);
	if(n==0)return 0;
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%s",s);
}
main()
{
	char *s = (char *)malloc(1000*sizeof(char));
	char *s1 = (char *)malloc(1000*sizeof(char));
	char *s2 = (char *)malloc(1000*sizeof(char));
	int n=0;
	while(nhap(s,s1,s2,&n)!=0)
	{
		t=1;
		char *ss = (char *)malloc(1000*sizeof(char));
		strcpy(ss,s);
		gop(s,s1,s2,ss);
		free(ss);
	}
//	free(s);free(s1);free(s2);free(ss);
}



