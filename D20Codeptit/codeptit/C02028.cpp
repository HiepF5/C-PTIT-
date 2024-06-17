#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int a[30]={0,1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31};
	for(int i=n,k=1;i>=1;i--,k++)
	{
	
		for(int j=k;j<=n;j++)
		{
		
			printf("%c",a[j]+64);
		}
		printf("\n");
	}
	
}
