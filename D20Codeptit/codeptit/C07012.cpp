#include<stdio.h>
#include<stdlib.h>
double max=0;
typedef struct thisinh
{
	int id;
	char ten[100];
	char nhom[100];
	double giamua, giaban;
	double hieu;
}ts;
void lai(ts *sv)
{
	sv->hieu=sv->giaban-sv->giamua;
}
void nhap(ts *sv,int i)
{
	fflush(stdin);
	sv->id=i+1;
	scanf("\n%[^\n]s", sv->ten);
	scanf("\n%[^\n]s", sv->nhom);
	scanf("%lf",&sv->giamua);
	scanf("%lf",&sv->giaban);
	lai(sv);
}
void nhapN(ts ds[],int n)
{
	for(int i=0;i<n;i++)nhap(&ds[i],i);
}
void xuat(ts *sv)
{
	printf("%d %s %s %.2lf\n",sv->id,sv->ten,sv->nhom,sv->hieu);
}
void xuatN(ts ds[],int n)
{
	for(int i=0;i<n;i++)xuat(&ds[i]);
}
void maxdiem(ts ds[],int n)
{
	ts temp;
	for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(ds[i].hieu<ds[j].hieu)
	{
		temp=ds[i];
		ds[i]=ds[j];
		ds[j]=temp;
	}
}
main()
{
	int t;
	scanf("%d",&t);
	ts ds[200];
	nhapN(ds,t);
	maxdiem(ds,t);
	xuatN(ds,t);
}
