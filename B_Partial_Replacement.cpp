#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;//. & *
        //distance b/w any 2 neighboring * characters does not exceed k
        //out put the minimum number of * characters that does not exceed k
        int cdot=0;
        int cstar=0;
        int li;//last index
        for(int x=n-1;x>=0;x--)
        {
            if(s[x]=='*')
            {
                li=x;
                break;
            }
        }
        int x=s.find('*');
        int y=x+k;
        int ans=2;
        if(li==x)
        {
            ans=1;
        }
        else{
            while(x<li && y<li)
            {
                
                bool sf=false;//starfound 
                do{
                    if(s[y]=='*')
                    {
                       ans++;
                       x=y;
                       sf=true;

                    }
                    else
                    {
                        y--;
                    }
                }while(sf==false);
                y=x+k;
            }
        }
        cout<<ans<<endl;

    }
}