#include <stdio.h>
#include <string.h>
#define max 101
void chuan(char s[])
{
    for(int i=0;i<strlen(s);i++)
    if(s[i]>='A'&&s[i]<='Z')s[i]=s[i]+32;

}
int main ()
{
	int t;
	scanf("%d\n",&t);
	char  s[max][max];
	for(int k=1;k<=t;k++)
	{
        char name[max][max];
        int l= 0;
        do 
        {
            scanf ("%s", &name[l]);
            chuan(name[l]);
            l++;
        }
        
        while (getchar () != '\n');
        strcat(s[k],name[l-1]);
        int b[101]={};
        for (int i = 0; i < l-1; i++)
        {
           strncat(s[k],name[i],1);
        }
    }
    
    for(int k=1;k<=t;k++)//printf("%s@ptit.edu.vn\n",s[k]);
	{
	int d=1;
	for(int i=k-1;i>=1;i--)
	if(strcmp(s[i],s[k])==0)d++;
	if(d>=2)printf("%s%d@ptit.edu.vn\n",s[k],d);
	if(d==1)printf("%s@ptit.edu.vn\n",s[k]);
	}
    
}
