
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    
    while(t--)
    {
        int min=INT_MAX;
        int n;
        cin>>n;
        int ar[n];
        for(int x=0;x<n;x++)
        {
            cin>>ar[x];
            if(ar[x]<=min)
            {
                min=ar[x];
            }
        }
        int countmin=0;
        for(int x=0;x<n;x++)
        {
            if(ar[x]==min)
            {
                countmin++;

            }
        }
        cout<<(n-countmin)<<endl;   
    }
}