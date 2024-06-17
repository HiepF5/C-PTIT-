#include<stdio.h>
#include<string.h>
main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	        int a[100];
        char s[100];
        gets(s);
        int n=strlen(s);
        for(int i=0;i<n;i++)
        {
        if(s[i]=='I')a[i+1]=1;
        if(s[i]=='V')a[i+1]=5;
        if(s[i]=='X')a[i+1]=10;
        if(s[i]=='L')a[i+1]=50;
        if(s[i]=='C')a[i+1]=100;
        if(s[i]=='D')a[i+1]=500;
        if(s[i]=='M')a[i+1]=1000;
        }
        //for(int i=1;i<=n;i++)printf("%d ",a[i]);
        int k=a[n];
        //printf("%d",k);
      	a[0]=0;
        for(int i=n;i>=1;i--)
        {
        if(a[i]>a[i-1])k-=a[i-1];
        if(a[i]<=a[i-1])k+=a[i-1];
        }
       printf("%d\n",k);
   }
}
