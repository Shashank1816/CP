#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k1,k2;
        cin>>n>>k1>>k2;
        int w,b;
        cin>>w>>b;
        int tw=k1+k2;//total white tiles
        int tb=((n*2)-tw);//total black tiles
        int maxw,maxb;//maximum no. of domino possible
        if(tw%2==0)
        {
            maxw=tw/2;
        }
        else if(tw%2!=0)
        {
            maxw=(tw-1)/2;
        }
        //now check for black
        if(tb%2==0)
        {
            maxb=tb/2;
        }
        else
        {
            maxb=(tb-1)/2;
        }
        //now check for condition in the question
        if(w<=maxw && b<=maxb)
        {
            cout<<"YES\n";
        }
        else{cout<<"NO\n";}
    }
    return 0;
}

