#include<stdio.h>
#include<string.h>
main()
{
		char a[7],b[7];
		scanf("%s%s",a,b);
		int n1=strlen(a);
		int n2=strlen(b);
		int d=0,dl=0;
		for(int i=0;i<n1;i++)d=d+a[i]-48;
		for(int i=0;i<n2;i++)dl=dl+b[i]-48;
		if(dl>=d){printf("%s %s",a,b);}
		else {printf("%s %s",b,a);}
		
}
