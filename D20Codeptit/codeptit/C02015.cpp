#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int a[11]={0,1,3,5,7,9,11,13,15,17,19};
	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=a[i];j++)
	{
		printf("%d",j);
	}
	
	printf("\n");
}
	
}
