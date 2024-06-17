#include<stdio.h>
#include<string.h>
main()
{
	char a[50],tanso[10];
	for(int i=0;i<10;i++)tanso[i]=0;
	scanf("%s",a);
	int n=strlen(a);
	int h=1;
	for(int i=0;i<n;i++)
	if(a[i]=='2'||a[i]=='3'||a[i]=='5'||a[i]=='7'){tanso[a[i]-48]++;}
	for(int i=0;i<n;i++)
	if(a[i]=='2'||a[i]=='3'||a[i]=='5'||a[i]=='7')
	if(tanso[a[i]-48]!=0){printf("%c %d\n",a[i],tanso[a[i]-48]);tanso[a[i]-48]=0;}
	return 0;
}
