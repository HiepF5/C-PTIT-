#include<stdio.h>
main()
{
	int n,d=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	if(i%2!=0)
	for(int j=1;j<=i;j++)
	{
		d++;printf("%c ",d+96);
	}
	else 
	{
	int k=d+i;
	for(int j=d+i;j>d;j--)
	{
		printf("%c ",j+96);
	}
	d=k;
}
	printf("\n");
}
	
}
