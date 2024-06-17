#include<stdio.h>
#include<stdlib.h>
double max=0;
typedef struct thisinh
{
	char ten[100];
	char ngaysinh[100];
	double mon1, mon2, mon3;
	double diem;
}ts;
void diemtb(ts *sv)
{
	sv->diem=(sv->mon1+sv->mon2+sv->mon3);
}
void nhap(ts *sv)
{
	fflush(stdin);
	scanf("\n%[^\n]s", sv->ten);
	scanf("\n%[^\n]s", sv->ngaysinh);
	scanf("%lf",&sv->mon1);
	scanf("%lf",&sv->mon2);
	scanf("%lf",&sv->mon3);
	diemtb(sv);
}
void nhapN(ts ds[],int n)
{
	for(int i=0;i<n;i++)nhap(&ds[i]);
}
void xuat(ts *sv,int n)
{
	printf("%d %s %s %.1lf\n",n,sv->ten,sv->ngaysinh,sv->diem);
}
void xuatN(ts ds[],int n)
{
	for(int i=0;i<n;i++)if(ds[i].diem==max)xuat(&ds[i],i+1);
}
void maxdiem(ts ds[],int n)
{
	for(int i=0;i<n;i++)if(ds[i].diem>max)max=ds[i].diem;
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
