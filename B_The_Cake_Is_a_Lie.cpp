#include<bits/stdc++.h>
using namespace std;
#define int             long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        if(n==m)
        {
            if(n==1)
            {
                if(k==0)cout<<"YES";
                else cout<<"NO";
            }
            else
            {
                int num=1+n;
                for(int x=2;x<n;x++)
                {
                    num=num+(2*x);
                }
                if(k==num)cout<<"YES";
                else cout<<"NO";
                
            }
        }
        else if(n==1 || m==1)
        {
            int num;
            if(n==1)
            {
                num=m-1;
            }
            else num=n-1;
            //check for k
            if(num==k)
            {
                cout<<"YES";
            }
            else cout<<"NO";

        }
        else
        {
            int less=(n>=m)?m:n;
            int max=(n+m)-less;
            int num=1+less;
            for(int x=2;x<less;x++)
            {
                num=num+(2*x);
            }
            int times=max-less;
            num=num+(times*less);
            if(k==num)
            {
                cout<<"YES";
            }
            else cout<<"NO";
        }
        cout<<"\n";
    }

    return 0;
}