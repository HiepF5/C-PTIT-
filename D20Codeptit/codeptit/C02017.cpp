#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int k,j;
		for( j=1,k=0;j<=i;j++,k=k+2)
		{
			printf("%d",k+1);
		}
		for(j=i-1,k=k-4;j>=1;j--,k=k-2)
		{
			printf("%d",k+1);
		}
		printf("\n");
	}
	
}
