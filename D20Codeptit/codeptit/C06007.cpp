#include<stdio.h>
#include<string.h>
char s[105],x[105];
int n1,n2;
int kiemtra(int n,int m)
{
	//printf("%d %d",n2,m-n);
	if(m-n!=n2)return 1;
	else {
	int j=-1;
	
	for(int i=n;i<m;i++)if(s[i]!=x[++j]){return 1;}
	}
	return 0;
}
main()
{
	
	gets(s);
	scanf("%s",&x);
	n1=strlen(s);
	n2=strlen(x);
	int k=0;
	for(int i=0;i<n1;i++)
	{
		if(s[i]==' '){if(kiemtra(k,i))for(int j=k;j<=i;j++)printf("%c",s[j]);k=i+1;}
		if(i==n1-1){if(kiemtra(k,i+1))for(int j=k;j<=i;j++)printf("%c",s[j]);k=i+1;}
	}
}
