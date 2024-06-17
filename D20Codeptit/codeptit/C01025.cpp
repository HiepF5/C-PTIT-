#include<stdio.h>
#include<math.h>
int max(int a,int b)
{
	if(a>b)return a;
	else return b;
}
int min(int a,int b)
{
	if(a>b)return b;
	else return a;
}
main()
{
	int x1,x2,x3,x4;
	int y1,y2,y3,y4;
	scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	int s1=0,s2=0;
	s1=abs(-min(x1,min(x2,min(x3,x4)))+max(x1,max(x2,max(x3,x4))));
	s2=abs(-min(y1,min(y2,min(y3,y4)))+max(y1,max(y2,max(y3,y4))));
	//printf("%d %d",s1,s2);
	printf("%d",max(s1,s2)*max(s1,s2));
}
