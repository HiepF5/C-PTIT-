#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i=0;
		int d=0;
		int a[1005];
		a[0]=0;
		//scanf("%d",&i);
		//for(int j=1;j<=i;j++)scanf("%d",&a[j]);
	//	char s[1000];
		//gets(s);
		do 
        {
        	i++;
            scanf ("%d", &a[i]);
        }
        while (getchar () != '\n');
        //for(int j=2;j<=i;j++)printf("%d ",a[j]);
		if(i%2==0)
		{
			for(int j=1;j<=i;j++)if(a[j]%2==0)d++;
			if(d>=i-d)printf("YES\n");
			else printf("NO\n");
		}
		else 
		{
			for(int j=1;j<=i;j++)if(a[j]%2!=0)d++;
		//	printf("%d %d",d,i-d);
			if(d>=i-d)printf("YES\n");
			else printf("NO\n");
		}
	}
}

