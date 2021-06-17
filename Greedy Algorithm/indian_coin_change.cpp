#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;//number of coins
    vector<int> vec;
    int enter;
    for(int x=0;x<n;x++)
    {
        cin>>enter;
        vec.push_back(enter);
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    int sum;
    cin>>sum;
    int count=0;
    for(int x=0;x<n;x++)
    {
        int c=sum/vec[x];
        sum=sum-(c*vec[x]);
        count+=c;
    }
    cout<<"Total Number of coins required = "<<count<<endl;
    return 0;
}