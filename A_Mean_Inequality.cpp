#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n=2*n;
        vector<ll>vec;
        ll enter;
        for(ll x=0;x<n;x++)
        {
            cin>>enter;
            vec.push_back(enter);
        }
        sort(vec.begin(),vec.end());
        ll p1=0;
        ll p2=n-1;
        vector<ll>ans;
        while(p1<=p2)
        {
            ans.push_back(vec[p1]);
            ans.push_back(vec[p2]);
            p1++;
            p2--;
        }
        for(ll x=0;x<n;x++)
        {
            cout<<ans[x]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}
