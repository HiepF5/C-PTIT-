#include <stdio.h>
#include <string.h>
#define max 101
int main ()
{
        char name[max][max];
        int l= 0;
        do 
        {
            scanf ("%s", &name[l]);
            l++;
        }
        while (getchar () != '\n');
        int b[101]={};
        for (int i = 0; i < l; i++)
        {
        	int t=0;
        	for(int j=i+1;j< l;j++)if(strcmp(name[i],name[j])==0&&b[j]==0){b[j]=1;}//printf("%s", name[j]);}
        }
        for (int i = 0; i < l; i++)if(b[i]==0)printf("%s ",name[i]);
}
