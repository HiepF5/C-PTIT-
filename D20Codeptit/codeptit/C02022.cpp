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
		d++;printf("%d ",d);
	}
	else 
	{
	int k=d+i;
	for(int j=d+i;j>d;j--)
	{
		printf("%d ",j);
	}
	d=k;
}
	printf("\n");
}
	
}
