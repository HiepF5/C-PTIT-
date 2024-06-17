#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	//int a[30]={0,1,23,5,7,9,11,13,15,17,19,21,23,25,27,29,31};
	for(int i=1,k=n-1;i<=n;i++,k--)
	{
	
		for(int j=k;j<=k+n-i;j++)
		{
		
			printf("%c",j+64);
		}
		printf("\n");
	}
	
}
