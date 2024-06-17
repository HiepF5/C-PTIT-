#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int AB,AC;
	AB= (d-b)*(d-b);
	AC= (c-a)*(c-a);
	//printf("%d %d",AB,AC);
	if(AB==AC)printf("YES\n");
	else printf("NO\n");
}
}
