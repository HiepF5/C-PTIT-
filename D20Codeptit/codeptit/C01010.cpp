#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int nam=0,tuan=0,ngay=0;
	nam=n/365;
	tuan=(n-(nam*365))/7;
	ngay=n-nam*365-tuan*7;
	printf("%d %d %d",nam,tuan,ngay);
}
