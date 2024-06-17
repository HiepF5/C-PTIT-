#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mxn 1000005
ll pr[mxn]={};
void sang()
{
    pr[0]=pr[1]=1;

    for(int i=2;i*i<=mxn;i++)
    {
        if(!pr[i])
            for(int j=i*i;j<=mxn;j+=i)pr[j]=1;
    }
}
int kiemtra(int n)
{
	for(int i=2;i<=n;i++)if(!pr[i]&&!pr[n-i]){cout<<i<<" "<<n-i;return 0;}
	return 1;
}
main()
{
	sang();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(kiemtra(n))cout<<"-1";
		cout<<endl;
	}
}
