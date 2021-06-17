#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>vec;
    for(int x=0;x<n;x++)
    {
        int start,end;
        cin>>start>>end;
        vec.push_back({start,end});
    }
    sort(vec.begin(),vec.end(),[&](vector<int>&a , vector<int>&b){
        return a[1]<b[1];//to sort it in ascending order according to the end time 
    });

    int take=1;
    int end=vec[0][1];
    for(int x=1;x<n;x++)
    {
        if(vec[x][0]>=end)
        {
            take++;
            end=vec[x][1];
        }
    }
    cout<<take<<"\n";
    return 0;
}