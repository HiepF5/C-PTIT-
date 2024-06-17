#include<bits/stdc++.h>
#define ll long long
int c[10][10];
int maxx=0;
int n=8;
int xuoi[25]={}, nguoc[25]={},b[25]={},a[25];
using namespace std;
void capnhat(){
    int x = 0;
    for(int i = 1; i <= 8; i++){
        x = x + c[i][a[i]];
    }
    if(x > maxx) maxx = x;
}
void sinh(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(!b[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1])
        {
            a[i]=j;
            b[j]=1;xuoi[i-j+n]=1;nguoc[i+j-1]=1;
            if(i==n)capnhat();
            else sinh(i+1);
             b[j]=0;xuoi[i-j+n]=0;nguoc[i+j-1]=0;
        }
    }
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        maxx=0;
         for(int i=1;i<=25;i++)
         {
             b[i]=xuoi[i]=nguoc[i]=0;
         }
        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)cin>>c[i][j];
        sinh(1);
        cout<<maxx<<endl;
    }

}
