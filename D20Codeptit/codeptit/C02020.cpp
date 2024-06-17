#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
		printf("~");
		}
		int k,j;
		for( j=1,k=0;j<=i;j++,k=k+2)
		{
			printf("%d",k+2);
		}
		for(j=i-1,k=k-4;j>=1;j--,k=k-2)
		{
			printf("%d",k+2);
		}
		printf("\n");
	}
	
}
