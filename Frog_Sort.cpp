#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        vector<long int > w;
        vector<long int > l;
        long int enter;
        for(long int x=0;x<n;x++)
        {
            cin>>enter;
            w.push_back(enter);
        }
        for(long int x=0;x<n;x++)
        {
            cin>>enter;
            l.push_back(enter);
        }
        
        map<long int ,pair< long int,int> > frogs;//har frog ka position aur jump <weight,<pos,jump>>
        for(int x=0;x<n;x++)
        {
            frogs[w[x]]={x,l[x]};
        }
        
        //position aur jumps link hogai aur sabki key frog ka weight hai
        int touch=0;
        int point;//1 ki position
        for(int x=0;x<n;x++)
        {
            if(w[x]==1)
            {
                point=x;//1 ki position mil gayi
            }
        }
        
        //ab har number ko ascending order me 1 se aage le jaana hai
        for(auto it=frogs.begin();it!=frogs.end();it++)//1 se leke n tak acc to weights
        {
            if(it!=frogs.begin())
            {
                int pos=(it->second).first;
                //jiska weight ab 2 hai usko 1 se aage nikalna hai 
                while(point>=pos)
                {
                    touch++;
                    //position point ke aage tak le jaani hai 
                    pos=pos+(it->second).second;//jump add kar dia 
                }
                //pivot point 2 hojaega kyun wo 1 se aage aa chuka hai
                point=pos;
            }
        }
        cout<<touch<<endl;
    }
    return 0;
}