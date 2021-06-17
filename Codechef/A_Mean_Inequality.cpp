#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isavg(ll index,vector<ll> vec)
{
    int n=vec.size();
    if(n<=2)
    {
        return false;
    }
    else 
    {
        if(vec[index]==((vec[index-1]+vec[index+1])/2))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> vec;
        ll enter;
        for(ll x=0;x<n;x++)
        {
            cin>>enter;
            vec.push_back(enter);
        }
        double avg;
        for(ll x=1;x<n-1;x++)
        {
            if(isavg(x,vec));
            {
                ll temp=vec[x];
                vec[x]=vec[x-1];
                vec[x-1]=temp;
            }
        }
        for(ll x=0;x<n;x++)
        {
            cout<<vec[x]<<" ";
        }
        cout<<"\n";
    
    }
}