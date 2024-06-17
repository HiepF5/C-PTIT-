#include<stdio.h>
#include<string.h>
int kiemtra(int n,int m,int n2,char s[],char x[])
{
	char ss[205];
	if(m-n!=n2)return 1;
	else {
	int j=-1;
	strcpy(ss,s);
	for(int i=n;i<m;i++)if(ss[i]>='A'&&s[i]<='Z')ss[i]=ss[i]+32;
	for(int i=n;i<m;i++)if(ss[i]!=x[++j]){return 1;}
	}
	return 0;
}
main()
{
	int t;
	scanf("%d\n",&t);
	for(int f=1;f<=t;f++)
	{
	char s[205],x[25];
	int n1,n2;
	gets(s);
	gets(x);
	n1=strlen(s);
	n2=strlen(x);
	for(int i=0;i<n2;i++)if(x[i]>='A'&&x[i]<='Z')x[i]=x[i]+32;
	int k=0;
	printf("Test %d: ",f);
	for(int i=0;i<n1;i++)
	{
		
		if(s[i]==' '){if(kiemtra(k,i,n2,s,x))for(int j=k;j<=i;j++)printf("%c",s[j]);k=i+1;}
		if(i==n1-1){if(kiemtra(k,i+1,n2,s,x))for(int j=k;j<=i;j++)printf("%c",s[j]);k=i+1;}
	}
	printf("\n");
	}
}
