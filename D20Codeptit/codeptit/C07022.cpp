#include<stdio.h>
#include<stdlib.h>
int dem;
typedef struct qlsv
{
	int id;
	char name[100];
	double diem1,diem2,diem3,diemtong;
}ts;
int nhap(ts *sv,int dem)
{
	fflush(stdin);
	sv->id=dem+1;
	scanf("\n%[^\n]s",&(sv->name));
	scanf("%lf %lf %lf",&(sv->diem1),&(sv->diem2),&(sv->diem3));
	sv->diemtong=sv->diem1+sv->diem2+sv->diem3;
}
int nhapN(ts ds[],int n)
{
	int k=dem;for(int i=k;i<n+k;i++){nhap(&ds[i],dem);dem++;}
}
void xuat(ts *sv)
{
	printf("%d %s %.1lf %.1lf %.1lf\n",sv->id,sv->name,sv->diem1,sv->diem2,sv->diem3);
}
void xuatN(ts ds[],int n)
{
	for(int i=0;i<n;i++)xuat(&ds[i]);
}
void sapxep(ts ds[],int n)
{
	for(int i=0;i<n;i++)if(ds[i].diem1<ds[i].diem2&&ds[i].diem2<ds[i].diem3)xuat(&ds[i]);
}
void thaythe(ts *ds,int n,int dem)
{ts temp;for(int i=0;i<dem;i++){if(ds[i].id==n){nhap(&ds[i],n-1);break;}}}
main()
{
	ts ds[100];
	int cn;
	dem=0;
		int n;int m ;
	while(1)
	{
	scanf("%d",&cn);
	switch(cn)
	{
		case 1:
		scanf("%d",&n);
		nhapN(ds,n);
		printf("%d\n",n);
		break;
		case 2:
		scanf("%d",&m);
		thaythe(ds,m,dem);
		printf("%d\n",m);
		break;
		case 3:
		sapxep(ds,dem);
		break;
	}
	if(cn==3)break;
}
}
