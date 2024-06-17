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
	scanf("%d",&t);
	while(t--)
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
        for(int i=0;i<l;i++){name[i][0]-=32;printf("%c",name[i][0]);for(int j=1;j<strlen(name[i]);j++)printf("%c",name[i][j]);printf(" ");}
        printf("\n");
    }
}
