#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m;
        cin>>m;
        string vec;
        cin>>vec;
       
        vector<int> lower;
        vector<int> higher;
        for(int x=0;x<n;x++)
        {
            int li,ri;//left index, right index
            if(vec[x]=='1')
            {
                if((x+m)>=n) {ri=n-1;}

                else {ri=x+m;}

                if((x-m)<0) {li=0;}

                else {li=x-m;    }

                lower.push_back(li);
                higher.push_back(ri);
            }
        }
        
        int length=lower.size();
        vector<int>ans;
        int p=0;
        for(int x=0;x<length;x++)
        {
            while(p<lower[x])
            {
                ans.push_back(0);
                p++;
            }
            while(p>=lower[x] && p<=higher[x])
            {
                ans.push_back(1);
                p++;
            }
        }
        for(int x=0;x<n;x++)
        {
            cout<<ans[x];
        }
        cout<<endl;
    }
    return 0;
}
