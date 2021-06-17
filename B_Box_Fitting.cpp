#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> vec;
        ll w;
        cin>>w;//width of the box
        ll po2;//power of 2 just less than or equal to w
        ll x=1;
        do{
            if((x*x)<=w)
            {
                po2=x*x;
                x++;
            }
            
        }while((x*x)<=w);
        ll enter;
        for(ll x=0;x<n;x++)
        {
            cin>>enter;
            vec.push_back(enter);
        }
        multiset<ll>s;
        sort(vec.begin(),vec.end());
        ll mid;
        ll rem;
        int count=0;
        for(ll i=n-1;i>=0;i--)
        {
            auto l=s.lower_bound(vec[i]);
            if(l!=s.end())
            {
                rem=*l;
                mid=rem-vec[i];
                s.erase(l);
            }
            else 
            {
                mid=w-vec[i];
                count++;
            }

            if(mid>0)
            {
                s.insert(mid);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
