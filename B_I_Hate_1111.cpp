#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
ll digits(long long n)
{
    if (n/10 == 0)
        return 1;
    return (1 + digits(n / 10));
}
ll create(ll d)
{
    ll sum=0;
    for(int x=1;x<=d;x++)
    {
        sum=(sum*10)+1;
    }
    return sum;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll d=digits(n);
        int flag=0;
        ll sum=create(d);
        while(n>=0)
        {
            if(n>=sum)
            {
                n=n-sum;
                
            }
            else 
            {
                sum=create(d-1);
                n=n-sum;
            }
            d=digits(n);
            sum=create(d);
            if(n==0)
            {
                cout<<"YES\n";
                flag=1;
                break;
            }
             if (n<11 || sum==1)
            {
                flag=1;
                cout<<"NO\n";
                break;
            }
        }
        if (flag==0)
        cout<<"NO"<<endl;
       
    }
    return 0;

}

