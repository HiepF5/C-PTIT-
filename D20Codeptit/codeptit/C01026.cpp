#include<stdio.h>
#include<math.h>
main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		long long s;
		scanf("%lld",&s);
		int h=0;
		if(s==2||s==3)printf("YES\n");
		else if(s<=1||s==4)printf("NO\n");
		else for(int i=2;i<=sqrt(s);i++)if(s%i==0){printf("NO\n");h=1;break;}
		if(h==0)printf("YES\n");
	}
}
