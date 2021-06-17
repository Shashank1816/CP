#include<bits/stdc++.h>

using namespace std;
#define ll             long long
int prodof(vector<ll>a, vector<ll>b)//finds product
{
    int sum=0;
    int len=a.size();
    int pr=1;
    for(int x=0;x<len;x++)
    {
        pr=a[x]*b[x];
        sum=sum+pr;
    }
    return sum;
}
//for reversing the array
/*void reverse(vector<ll>arr, int low, int high)
{
    if (low < high)
    {
        swap(arr[low], arr[high]);
        reverse(arr, low + 1, high - 1);
    }
}*/
int main()
{
    ll n;
    cin>>n;
    vector<ll>a;
    vector<ll>b;
    ll enter;
    for(ll x=0;x<n;x++)
    {
        cin>>enter;
        a.push_back(enter);
    }
    for(ll x=0;x<n;x++)
    {
        cin>>enter;
        b.push_back(enter);
    }
    //for different window sizes we'll reverse all the subarrays and find the maximum product
    int maxpro=prodof(a,b);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            reverse(a.begin() + i, a.begin() + j);
            int p=prodof(a,b);
            if(p>=maxpro)
            {
                maxpro=p;
            }
            reverse(a.begin() + i, a.begin() + j);
            
        }

    }
    cout<<maxpro<<endl;
    return 0;

}