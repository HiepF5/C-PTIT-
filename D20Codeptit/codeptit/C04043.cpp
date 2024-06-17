#include<stdio.h>
#include<math.h>
long long a[5005];
#define swap(a,b){long long c;c=a;a=b;b=c;}
void sort(int l,int r,long long a[])
{
	
	int i,j,x,y;
	{
		i=l;
		j=r;
		x=a[(l+r)/2];
		while(i<=j)
		{
			while(a[i]>x)i++;
			while(a[j]<x)j--;
			if(i<=j)
			{
				if(i<j)swap(a[i],a[j]);
				i++;
				j--;
			}
		}
		if(l<j)sort(l,j,a);
		if(i<r)sort(i,r,a);
	}
	
}
int kiemtra(int n)
{
	long long i,j,k,check=0;
		for(i=1;i<=n;++i)
        for(j=i+1;j<=n;++j) {
        long long h=a[i]*a[i]-a[j]*a[j];
        long long p=(long long)sqrt(a[i]*a[i]-a[j]*a[j]);
        if(p*p==h) {       
        for(k=j+1;k<=n;++k) 
        if(h==a[k]*a[k]){
            ++check;
           if(check==1){ printf("YES\n");return 0;}
        } 
                }          
            } 
        if(check==0) printf("NO\n");    
}
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);//a[i]=a[i]*a[i];
		}
		sort(1,n,a);
		//for(int i=1;i<=n;i++)printf("%lld",a[i]);
		kiemtra(n);
	}
}
