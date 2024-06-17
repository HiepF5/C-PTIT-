#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
	for(int j=1;j<=i-1;j++)printf("~");for(int j=1;j<=n;j++)printf("*");
	printf("\n");
}
}
