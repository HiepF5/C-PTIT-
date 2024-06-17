#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,m;
        cin>>n>>s>>m;
        if(n<m)cout<<"-1";
        else
        {
            int res=0;
            int temp=s*m;
            if(s>6)s=s-(s/7);
            //cout<<s;
            for(int i=1;i<=s;i++)
            {
                int x=0;
                x=i*n;
                if(x>=temp)
                {

                    res=1;cout<<i<<""; break;

                }

            }
                            if(res==0)cout<<"-1";
       }
        cout<<endl;
    }

}
