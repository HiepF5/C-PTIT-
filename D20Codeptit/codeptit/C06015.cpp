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
        for(int i=1;i<l;i++){name[i][0]-=32;printf("%c",name[i][0]);for(int j=1;j<strlen(name[i]);j++)printf("%c",name[i][j]);if(i<l-1)printf(" ");else  printf(", ");}
       
        //name[0][0]-=32;printf("%c",name[0][0]);
		for(int j=0;j<strlen(name[0]);j++){name[0][j]-=32;printf("%c",name[0][j]);}
        printf("\n");
    }
}
