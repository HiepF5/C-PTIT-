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
        char name[max][max];
        int l= 0;
        do 
        {
            scanf ("%s", &name[l]);
            chuan(name[l]);
            l++;
        }
        while (getchar () != '\n');
        int b[101]={};
        for (int i = 0; i < l-1; i++)
        {
            printf("%c",name[i][0]);
        }
        printf("%s@ptit.edu.vn",name[l-1]);
}
