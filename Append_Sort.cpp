#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec;
        int enter;
        for(int x=0;x<n;x++)
        {
            cin>>enter;
            vec.push_back(enter);
        }
        //solve
        for(int x=1;x<n;x++)
        {
            if(vec[x]<vec[x-1])
            {
                int m=10;
                int s=0;
                temp=vec[x];
                while(vec[x]<=vec[x-1])
                {
                    
                    vec[x]=vec[x]+s;
                    s++;
                    if(s==10)
                    {
                        if(vec[x]<=vec[x-1])vec[x]=temp*m;
                        s=0;
                        m=m*10;
                    }
                }
            }
        }
    }
}