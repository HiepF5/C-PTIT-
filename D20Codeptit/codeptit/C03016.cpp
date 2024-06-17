#include<stdio.h>
#include<math.h>
long long a[6000];
void f()
{
    a[0]=0;
	a[1]=1;
	a[2]=1;
	for(int i=3;i<=6000;i++)a[i]=a[i-1]+a[i-2];
}
main()
{
	f();
	int t;
	scanf("%d",&t);
	while(t--)
	{
		 long long n;
		int h=1;
		scanf("%lld",&n);
		for(int i=0;i<=6000;i++){if(n==a[i]){printf("YES");break;} else if(a[i]>n){printf("NO");break;}}
		printf("\n");
	}
}
