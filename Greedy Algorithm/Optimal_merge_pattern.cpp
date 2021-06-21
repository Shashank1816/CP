#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
    int n;cin>>n;
    vector<int> vec(n);
    for(int x=0;x<n;x++)
    {
        cin>>vec[x];
    }
    priority_queue<int, vector<int>, greater<int> >minheap;
    for(int x=0;x<n;x++)
    {
        minheap.push(vec[x]);
    }
    int ans=0;
    while(minheap.size()>1)
    {
        int e1=minheap.top();
        minheap.pop();
        int e2=minheap.top();
        minheap.pop();
        ans+=e1+e2;
        minheap.push(e1+e2);
    }
    cout<<ans<<endl;
}