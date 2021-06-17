#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int cas=0;
    while(t--)
    {
        cas++;
        int cx,cy;
        cin>>cx>>cy;
        string s;
        cin>>s;
        int n=s.size();
        int sum=0;
        for(int x=0;x<n;x++)
        {
            char first,last;
            if(s[x]=='?')
            {
                continue;
            }
            else
            {
                first=s[x];
                for(int y=x+1;y<n;y++)
                {
                    if(s[y]!='?')
                    {
                        last=s[y];
                        break;
                    }
                }
                if(first!=last)
                {
                    if(first=='C' && last=='J')
                    {
                        sum+=cx;
                    }
                    else if(first=='J' && last=='C')
                    {
                        sum+=cy;
                    }
                }
                last='#';
                first='#';
            }
        }
       
        cout<<"Case #"<<cas<<": "<<sum;
        cout<<endl;

    }
}