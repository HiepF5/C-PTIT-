#include<stdio.h>
#include<string.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[50];
		scanf("%s",a);
		int n=strlen(a);
		int h=1;
		for(int i=0;i<n-1;i++)if(a[i]>a[i+1]){printf("NO\n");h=0;break;}
		if(h==1)printf("YES\n");
}
return 0;
}
