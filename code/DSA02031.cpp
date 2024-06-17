#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char s;
bool b[105];
int a[105];
int n=0;
bool check(){
	for(int i = 1; i <= n; i++){
		if(i != 1 && i != n){
			if(a[i] == 1){
				if(a[i-1] != 5 && a[i+1] != 5) return false;
			}
			else if(a[i] == 5){
				if(a[i-1] != 1 && a[i+1] != 1) return false;
			}
		}
	}
	return true;
}
void xuat()
{
    if(check())
    {


    for(int i=1;i<=n;i++)
        cout<<str[a[i]-1];
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
    cin>>s;
    n=s-'A'+1;
   // a[0]=5;
    //a[n+1]=5;
    //cout<<n;
    sinh(1);

}
