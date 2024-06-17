#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	//printf("%d ",t);
	while(t--)
	{ 
    char s;
    scanf("\n%c",&s);
    if(s<91)printf("%c \n",s+32);
	else printf("%c \n",s-32);
	}
}
