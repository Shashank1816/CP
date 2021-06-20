#include<bits/stdc++.h>
using namespace std;

bool compare(pair <int,int> a,pair <int,int>b)
{
    double v1=(double)a.first/a.second;
    double v2=(double)b.first/b.second;
    return v1>v2;//for arranging in decreasing order
}
signed main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>vec(n);
    for(int x=0;x<n;x++)
    {
        cin>>vec[x].first>>vec[x].second;//rupees and kilo
    }
    int w;
    cin>>w;
    sort(vec.begin(),vec.end(),compare);

    int ans=0;
    for(int x=0;x<n;x++)
    {
        if(w>=vec[x].second)
        {
            ans+=vec[x].first;
            w-=vec[x].second;
            continue;
        }
        //agar jagah nahi hai bag me toh 
        double vw=(double) vec[x].first/vec[x].second;
        ans+=vw*w;//avg value * remaining space in the bag
        w=0;
        break;
    }
    cout<<ans<<endl;
    
}
/*
Input
5
21 7
24 4
12 6
40 5
30 6
20

Output
109
*/