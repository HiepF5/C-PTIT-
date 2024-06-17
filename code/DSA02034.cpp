#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char s;
bool b[105];
int a[105];
int n=0;
bool check(){
	for(int i = 1; i < n; i++){
		if(abs(a[i+1]-a[i])==1)return 0;}
		return 1;
}
void xuat()
{
    if(check())
    {


    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<endl;
    }
}
void sinh(int i)
{
    for(int j=1;j<=n;j++)
    if(!b[j]){
       a[i]=j;
       b[j]=1;
       if(i==n)xuat();
       else sinh(i+1);
       b[j]=0;
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sinh(1);
    }


}
