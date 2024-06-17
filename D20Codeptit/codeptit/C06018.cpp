#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define max 1000005
#define For(i,a,b) for(int i=a;i<=b;i++)
void sapxep(char *s[],int n)
{

	for(int i=0; i<n-1; i++)
   		 {
        for(int j=1; j<n; j++)
        {
            	char *a = (char *)malloc(1000*sizeof(char));
				char *b = (char *)malloc(1000*sizeof(char));
				a=s[j];
				b=s[j-1];
				if(strcmp(a,b)<0)
            {
            	char *c = (char *)malloc(1000*sizeof(char));
            	c=s[j-1];
            	s[j-1]=s[j];
            	s[j]=c;
            }
        }
        //for(int k=0;k<n;k++)printf("%s ",s[k]);
        //printf("\n");
    }
    //	for(int k=0;k<n;k++)printf("%s ",s[k]);
}
typedef long long ll;
main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	char *a = (char *)malloc(1000*sizeof(char));
	char **c=(char **)malloc(1000*sizeof(char));
	char **d= (char **)malloc(105*sizeof(char));
	char *b = (char *)malloc(105*sizeof(char));
	gets(a);
	scanf("\n");
   gets(b);
	int i=0,j=0;
	char *p ,*q;
	p=strtok(a, " ");
	while(p!=NULL){c[i++]=p;p=strtok(NULL," ");}
	q= strtok(b," ");
	while(q!=NULL){d[j++]=q;q=strtok(NULL," ");}
	sapxep(c,i);
	sapxep(d,j);
	int n=i,m=j,t[200]={};
	for(int i=0;i<=200;i++)t[i]=0;
	for (int i = 0; i < n; i++)
    for(int j=i+1;j<n;j++)if(strcmp(c[i],c[j])==0&&t[j]==0)t[j]=1;
  // for (int i = 0; i < n; i++)ifprintf("%d ",t[i]);
    for (int i = 0; i < n; i++)if(t[i]==0)
	{
		int k=0;
		for(j=0;j<m;j++)if(strcmp(c[i],d[j])==0)k=1;
	if(k==0)printf("%s ",c[i]);}
	printf("\n");
}
}
