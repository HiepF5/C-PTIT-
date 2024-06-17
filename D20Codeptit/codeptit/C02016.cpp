#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int a[15]={0,1,3,5,7,9,11,13,15,17,19,21,23};
	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=a[i];j=j+2)
	{
		printf("%d",j);
	}
	for(int j=a[i-1];j>=1;j=j-2)
	{
		printf("%d",j);
	}
	printf("\n");
}
	
}
