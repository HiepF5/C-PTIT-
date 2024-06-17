#include<stdio.h>
#include<stdlib.h>
double max=0;
typedef struct thisinh
{
	int id;
	char ten[100];
	char ngaysinh[100];
	double mon1, mon2, mon3;
	double diem;
}ts;
void diemtb(ts *sv)
{
	sv->diem=(sv->mon1+sv->mon2+sv->mon3);
}
void nhap(ts *sv,int i)
{
	fflush(stdin);
	sv->id=i+1;
	scanf("\n%[^\n]s", sv->ten);
	scanf("\n%[^\n]s", sv->ngaysinh);
	scanf("%lf",&sv->mon1);
	scanf("%lf",&sv->mon2);
	scanf("%lf",&sv->mon3);
	diemtb(sv);
}
void nhapN(ts ds[],int n)
{
	for(int i=0;i<n;i++)nhap(&ds[i],i);
}
void xuat(ts *sv)
{
	printf("%d %s %s %.1lf\n",sv->id,sv->ten,sv->ngaysinh,sv->diem);
}
void xuatN(ts ds[],int n)
{
	for(int i=0;i<n;i++)xuat(&ds[i]);
}
void maxdiem(ts ds[],int n)
{
	ts temp;
	for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(ds[i].diem<ds[j].diem)
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
